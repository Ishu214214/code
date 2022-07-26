import re

a='''Under the folder, copy the extracted files downloaded from bootstrap. Under the head tag of the HTML file, the CSS needs to be linked. The jQuery downloaded should also be copied under the JS file. Make sure that under the project file, the downloaded files and HTML page must be present in that folder'''

b=re.compile(r'Under')

c=b.finditer(a)

for i in c:
    print(i)

print(a[0:5])    