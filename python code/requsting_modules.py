import requests
print(dir(requests))
r=requests.get('https://www.flipkart.com/search?q=iphon&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off')
print(r.text)