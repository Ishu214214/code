a=23L
if(is.integer(a)){
  print('integer')
}else
{  print('lod')
}



a=23+0i
if(is.integer(a)){
  print('integer')
}else
{  print('lod')
}



a=23L
if(a<0){
  print('integer')
}else
{  print('lod')
}



y<- c('a','b','c')
if('a' %in% y){
  print('vector')
}



a=23+0i
if(is.integer(a)){
  print('integer')
}else if(is.complex(a))
{  print('lod')
}else{
  print('hello')
}


