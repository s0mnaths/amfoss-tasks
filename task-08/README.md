## Sir Perceval's Quest
I was initially using the [PyGithub](https://github.com/PyGithub/PyGithub) library but then [vchrombie](https://github.com/vchrombie) advised me to call the API directly or by another way. Also by not using PyGithub library, my code looks smaller and cleaner.

### My script when amfoss-tasks was submitted
I use **Request** module and get information of all amFOSS repositories as a *json* using the API. Then I print the **'name'** of all amFOSS repositories and then pass their **'html_url'** through the [Perceval tool's](https://github.com/chaoss/grimoirelab-perceval/) command in a loop, which dumps all commits info inside the [commits.json](https://github.com/s0mnaths/amfoss-tasks/blob/main/task-08/commits.json) file. I also called the **OS** module so that Perceval command runs.

### My Update after submission date
Earlier I had used ```requests.get('https://api.github.com/users/amfoss/repos?per_page=100')```  to get the information of all the repositories (used ```per_page=100```. But if suppose a user/org has say, more than 100 repositories, then the script will fail and return only 100 repos. So after amfoss-tasks  submission of my initial code, I modified it and used Link headers for pagination, and get repository data from all the pages. Also had to reference Github API documentation and StackOverflow a lot for this change in script. I do the rest(printing repo names and using Perceval) like earlier.

### Result
In the end it stored information of total 3484 commits (when last run) inside the [commits.json](https://github.com/s0mnaths/amfoss-tasks/blob/main/task-08/commits.json) file.

**Some resources that came in handy:**
* [Github API List Orgs Repositories](https://developer.github.com/v3/repos/#list-organization-repositories)
* [Perceval: Retrieving data from GitHub repositories](https://chaoss.github.io/grimoirelab-tutorial/perceval/github.html)
* [Create Python Virtual Environment](https://www.geeksforgeeks.org/python-virtual-environment/)
* [Running Terminal commands in Python](https://www.kite.com/python/answers/how-to-run-terminal-commands-in-python)
* [Github API Pagination](https://developer.github.com/v3/guides/traversing-with-pagination/#constructing-pagination-links)
