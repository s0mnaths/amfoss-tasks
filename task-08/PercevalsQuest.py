import os

import requests
request = requests.get('https://api.github.com/users/amfoss/repos?per_page=100')
json = request.json()
for i in range(0,len(json)):
  print(json[i]['svn_url'],"\n")

for i in range(0,len(json)):
    command = "perceval git --json-line " + json[i]['svn_url'] + ">> commits.json"
    os.system(command)
    
