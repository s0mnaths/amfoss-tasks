## Sir Perceval's Quest
I was initially using the [PyGithub](https://github.com/PyGithub/PyGithub) library but then [vchrombie](https://github.com/vchrombie) advised me to call the API directly or by another way. Also by not using PyGithub library, my code looks smaller and cleaner.
I use request module and get the subversion URL of amFOSS repositories and pass them through the [Perceval tool's](https://github.com/chaoss/grimoirelab-perceval/) command in a loop, which dumps all commits info inside the commits.json file.
