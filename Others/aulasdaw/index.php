<html>
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Exercícios DAW</title>
        <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">
        <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
        <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
        <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
        <style>
              ol {
                counter-reset: li; /* Initiate a counter */
                list-style: none; /* Remove default numbering */
                *list-style: decimal; /* Keep using default numbering for IE6/7 */
                font: 15px 'trebuchet MS', 'lucida sans';
                padding: 0;
                margin-bottom: 4em;
                text-shadow: 0 1px 0 rgba(255,255,255,.5);
            }

            ol ol {
                margin: 0 0 0 2em; /* Add some left margin for inner lists */
            }

            .rounded-list > li > a{
                position: relative;
                display: block;
                padding: .4em .4em .4em 2em;
                *padding: .4em;
                margin: .5em 0;
                background: #ddd;
                color: #444;
                text-decoration: none;
                border-radius: .3em;
                transition: all .3s ease-out;
            }

            .rounded-list > li > a:hover{
                background: #eee;
            }

            .rounded-list > li > a:hover:before{
                transform: rotate(360deg);
            }

            .rounded-list > li > a:before{
                content: counter(li);
                counter-increment: li;
                position: absolute;
                left: -1.3em;
                top: 50%;
                margin-top: -1.3em;
                background: #87ceeb;
                height: 2.5em;
                width: 2.5em;
                line-height: 2em;
                border: .3em solid #fff;
                text-align: center;
                font-weight: bold;
                border-radius: 2em;
                transition: all .3s ease-out;
            }

            h3 {
                font-size: 1.2em;
            }
        </style>
    </head>
    <body>
        <header class="row">
        <a href="FUNCTIONS/readPHP.php?path=../FUNCTIONS/functions.php" role="button" class="col d-flex justify-content-center btn btn-info" style="color:white;">Arquivo de funções</a>            
        </header>
        <main class="container">
            <ol class="list-group rounded-list col" style="padding-top:15px;padding-right:0px">
                <?php
                    $pasta = scandir("./");
                    foreach($pasta as $folder)
                    {
                        if(strcmp(substr($folder, 0, 2), "EX") == 0){
                            $foldername = substr($folder, 0, 3);
                            $filename = strtolower(substr($folder, 0, 2));
                            ?>
                                <li class="list-group-item container">
                                <a class="row" href="<?=$foldername?>/HTML/<?=$filename?>.html"><?=(file_get_contents($foldername."/titulo.txt")."<br>")?></a>
                                <ul class="row list-group list-group-horizontal showme">
                                    <li class="col list-group-item"><a href="FUNCTIONS/readfile.php?path=../<?=$foldername?>/HTML/<?=$filename?>.html">HTML</a></li>
                                    <li class="col list-group-item"><a href="FUNCTIONS/readPHP.php?path=../<?=$foldername?>/PHP/<?=$filename?>.php">PHP</a></li>
                                </ul>
                                
                                </li><br>
                            <?php
                        }
                    }
                ?>
            </ol>
        </main>
    </body>
</html>