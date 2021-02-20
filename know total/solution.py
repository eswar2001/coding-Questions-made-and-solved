import json
# https://repl.it/@eswarabisheak/WorldlySkinnyOpposites
s = input()
data = json.loads(s)
for country in data['Countries']:
    print(country['Country'])
TotalConfirmed = 0
TotalDeaths = 0
for i in range(0,247):
  TotalConfirmed+=data['Countries'][i]['TotalConfirmed']
  TotalDeaths+=data['Countries'][i]['TotalDeaths']
print(str(TotalConfirmed))
print(str(TotalDeaths))