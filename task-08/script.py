import os
import requests

request = requests.get('https://api.github.com/users/amfoss/repos?per_page=100')
apiresult = request.json()
print("List of all @amFOSS repositories: \n")

for i in range(0,len(apiresult)):
  print( i+1 , ")" , apiresult[i]['name'] ,"\n")

for i in range(0,len(apiresult)):
    command = "perceval git --json-line " + apiresult[i]['html_url'] + ">> commits.json"
    os.system(command)