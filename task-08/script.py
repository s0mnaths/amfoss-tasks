import os
import requests

def printrepo(apicall, **kwargs):

    data = kwargs.get('page', [])

    resp = requests.get(apicall)
    data += resp.json()

    if len(data) > 500:
        return (data)

    if 'next' in resp.links.keys():
        return (printrepo(resp.links['next']['url'], page=data))

    print("List of all @amFOSS repositories: \n")

    for i in range(0,len(data)):
        print( i+1 , ")" , data[i]['name'] ,"\n")

    count=0
    for i in range(0,len(data)):
        command = "perceval git --json-line " + data[i]['html_url'] + ">> commits.json"
        os.system(command)
        count+=1
    
    print("\n\n\nTotal " + str(count) + " Repositories' commit information stored in commits.json file.")


orgsrepoapi = 'https://api.github.com/orgs/amfoss/repos?per_page=7'
data = printrepo(orgsrepoapi)
