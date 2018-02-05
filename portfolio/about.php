<!DOCTYPE html>
<html>
<!--

First Website
and comment
in html
(comments can span multiple lines)

-->

<!-- This is the head -->
<!-- All styles and javascript go inside the head -->
    <head>
      
      <meta charset="utf-8"/>
      <title> Chloé Lemaire : Personnal Website </title>
    <link href ="css/styles.css" rel= "stylesheet" type= "text/css" />
    <link href="https://fonts.googleapis.com/css?family=Pacifico" rel="stylesheet">
    </head>
    
<!-- closing head -->

    <!-- This is the body -->
    <!-- This is where we place the content of our website -->
    <body> <!--style ="background-color:black;color:white"--> 
        
        <header> 
        <h1> Chloé Lemaire </h1>
        </header>
        <nav>
        <hr widht="50%"/>
        <a href= "index.php" id="underline"> Home </a>
        <a href= "about.php"> About </a>
        <a href= "contact.php"> Contact </a>
        </nav>
        <br />
        
        <div id ="content">
            <table>
                <tr id="table-header">
                    <td><strong>Programming Language</strong></td>
                    <td><strong>Years Experience</strong></td>
                </tr>
                <tr class="table-row">
                    <td>Python</td>
                    <td>2</td>
                </tr>
                <tr class="table-row">
                    <td>C++</td>
                    <td>2</td>
                </tr>
                <tr class="table-row">
                    <td>PHP</td>
                    <td>0</td>
                </tr>
            </table>
            <br />
             <ul>
                <li><span class="hobby">Tennis :</span> I played tennis since I am 4 and I love competition. </li>
                <li><span class="hobby">Music :</span> I like <strong>Electro</strong> music like Martin Garrix or Dj Snake.</li>
                <li><span class="hobby">Renewable energies :</span> I would like to be an engineer in renewable energy, I think it's the future.</li>
                <li><span class="hobby">Series :</span> I love watching series during my free time.</li>
            </ul>
       
          </div>
          <br />
       <footer style="color:red; font-size:70%;">
        <hr>
        Internet Programming.2018&copy; Lemaire <br />
        <strong>Disclaimer:</strong> The information in this webpage is ficticious. <br />
        It is used for academic purpose only.
        <br />
        <img src= "img/csumb.png" alt "Picture of csumb" height ="200" widht= "400"/>
            
        </footer>
            
            
    
      
        
    </body>
    <!-- closing body -->

</html>