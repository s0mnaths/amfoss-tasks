package main

import (
	"context"
	"fmt"
	"log"

	"github.com/vartanbeno/go-reddit/reddit"
)

var ctx = context.Background()

func main() {

	if err := run(); err != nil {
		log.Fatal(err)
	}
}


func run() (err error) {

	//giving proper authorization for upvoting the posts
	withCredentials := reddit.WithCredentials("<ID>", "<SECRET>", "<USERNAME>", "<PASSWORD>")
	client, _ := reddit.NewClient(withCredentials)

	//search for subreddits using ‘memes’ as the search query
	Subreddit, _, err := client.Subreddit.SearchNames(ctx, "memes")
	if err != nil {
		return
	}

	fmt.Printf("\n---->List of few subreddits when 'memes' is the search query:\n\n")

	var s []string
	for _, Subreddit := range Subreddit {
		fmt.Println(Subreddit)
		s = append(s, Subreddit)
	}

	fmt.Printf("\n---->r/%s is the top result when 'memes' is searched.\n\n", s[0])

	//upvoting posts from subreddit that occurs as the first search result
	fmt.Printf("---->Displaying post title and liking the posts, posted in r/%s last week (max limit 100):\n\n", s[0])
	posts, _, err := client.Subreddit.TopPosts(ctx, s[0], &reddit.ListPostOptions{
		ListOptions: reddit.ListOptions{
			Limit: 100,
		},
		Time: "week",
	})
	if err != nil {
		return
	}

	for _, post := range posts {
		fmt.Println(post.Title)

		postidfullname := "t3_" + post.ID

		_, err := client.Post.Upvote(ctx, postidfullname)
		if err != nil {
			return err
		}
	}

	//displaying total number of posts upvoted
	fmt.Println("---->Total posts upvoted = ", len(posts))

	return
}
