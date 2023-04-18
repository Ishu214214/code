
<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">

    <title>Hotel Management systems</title>
  </head>
  <body> 
  <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
  <a class="navbar-brand" href="#">hotel</a>
  <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
    <span class="navbar-toggler-icon"></span>
  </button>

  <div class="collapse navbar-collapse" id="navbar SupportedContent">
    <ul class="navbar-nav mr-auto">
      <li class="nav-item active">
        <a class="nav-link" href="/ishu/get_and_post_1.php">Home <span class="sr-only">(current)</span></a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="#">Link</a>
      </li>
      <li class="nav-item dropdown">
        <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
          Dropdown
        </a>
        <div class="dropdown-menu" aria-labelledby="navbarDropdown">
          <a class="dropdown-item" href="#">Action</a>
          <a class="dropdown-item" href="#">Another action</a>
          <div class="dropdown-divider"></div>
          <a class="dropdown-item" href="#">Something else here</a>
        </div>
      </li>
      <li class="nav-item">
        <a class="nav-link disabled" href="#" tabindex="-1" aria-disabled="true">Disabled</a>
      </li>
    </ul>
    <form class="form-inline my-2 my-lg-0">
      <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
      <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Search</button>
    </form>
  </div>
</nav>
<?php
    if ( $_SERVER['REQUEST_METHOD'] == 'POST')
    {
        $name = $_POST['name'];
        $email = $_POST['email'];
        $concern = $_POST['concern'];
       
      // Submit these to a database
    }

    $servername="localhost";
$username = "root";
$password ="";
$database = "contact";

$conn =mysqli_connect($servername, $username ,$password,$database);                  //conn == con bath are same becouse we are assining the value

if(!$conn)
{
    die( "<br> we  are having the error in the code" . mysqli_connect_error());
}
else
{
   // echo "<br> we have succesfully connect the conn";
   
   //$sql = "INSERT INTO `name` (`name`, `class`, `age`) VALUES ('hey', '12', '12'); ";
   //sql or sqllllllll are same becouse both are same we are passing the value
   $sql  = "INSERT INTO `contacts` ( `name`, `email`, `concern`) VALUES ( '$name', '$email', '$concern')";
   
   $result = mysqli_query($conn ,$sql);
   
   if(!$result)
   {
      // echo "<br> connection fail<br>".mysqli_error($conn);
      echo '<div class="alert alert-danger alert-dismissible fade show" role="alert">
        <strong>Error</strong> Your email has been not submitted successfully!
        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
        <span aria-hidden="true">×</span>
        </button>
        </div>';
    }
    else{
        // echo "<br>connection sucessfullt";
        echo '<div class="alert alert-success alert-dismissible fade show" role="alert">
        <strong>Success!</strong> Your email has been submitted successfully!
        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
        <span aria-hidden="true">×</span>
        </button>
        </div>';
    }
}

    
?>

<div class="container mt-3">
<h1>contacts us for booking room</h1>
    <form action="/ishu/get_and_post_1.php" method="post">
    <div class="form-group">
        <label for="email">NAME</label>
        <input type="text" name="name" class="form-control" id="name" aria-describedby="emailHelp"></br></br>
    </div>
    
    <div class="form-group">
        <label for="email">Email</label>
        <input type="email" name="email" class="form-control" id="email" aria-describedby="emailHelp">
        <small id="emailHelp" class="form-text text-muted">We'll never share your email with anyone else.</small>
        </br></br>
    </div>

    <div class="form-group">
        <label for="concern">Description</label>
        <textarea class="form-control" id="concern" cols="30" rows="10"></textarea>
        </br></br>
    </div>
    
    <button type= "submit" class="btn btn-primary">Submit</button>
    </form>
</div>

    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
  </body>
</html>

