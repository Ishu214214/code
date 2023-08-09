x<- switch (2,
  "a","b","c","d"
)
print(x)

x<- switch (6,
            "a","b","c","d"
)
print(x)

y<-11
z<-switch (y,
  10 = "action",
  11="you get "
)
print(z)