# https://repl.it/@eswarabisheak/LoathsomeQuickFtpclient
import json
import math


def sd_calc(data):
    n = len(data)

    if n <= 1:
        return 0.0

    mean, sd = avg_calc(data), 0.0

    # calculate stan. dev.
    for el in data:
        sd += (float(el) - mean)**2
    sd = math.sqrt(sd / float(n-1))

    return sd


def avg_calc(ls):
    n, mean = len(ls), 0.0

    if n <= 1:
        return ls[0]

    # calculate average
    for el in ls:
        mean = mean + float(el)
    mean = mean / float(n)

    return mean


dailyconfirmed = []
totaldeceased = []
totalconfirmed = []
f = input()
d = json.loads(f)
for state in d['cases_time_series']:
  dailyconfirmed.append(state['dailyconfirmed'])
  totaldeceased.append(state['totaldeceased'])
  totalconfirmed.append(state['totalconfirmed'])
print(round(sd_calc(totaldeceased), 2))
print(round(sd_calc(totalconfirmed), 2))
print(round(sd_calc(dailyconfirmed), 2))

