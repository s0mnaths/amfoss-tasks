## Sir Perceval's Quest
I was initially using the [PyGithub](https://github.com/PyGithub/PyGithub) library but then [vchrombie](https://github.com/vchrombie) advised me to call the API directly or by another way. Also by not using PyGithub library, my code looks smaller and cleaner.

I use **Request** module and get information of all amFOSS repositories using the API. Then I print the *subversion URL* of amFOSS repositories and pass them through the [Perceval tool's](https://github.com/chaoss/grimoirelab-perceval/) command in a loop, which dumps all commits info inside the commits.json file. I also called the **OS** module so that Perceval command runs.

In the end it stores information of 3480 commits (when last run) inside the [commits.json](https://github.com/s0mnaths/amfoss-tasks/blob/main/task-08/commits.json) file
