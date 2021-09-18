Ce repo contient les réponses à chacun des exercices dont les énoncés sont indiqués dans le .pdf ici présent.

Pour compiler chacun des exos (.c), il vous faut faire gcc -Wall suivi du nom du fichier que vous souhaitez compiler, ex :

    gcc -Wall exo1.c

Certains exercices nécessitaient l'usage de la librairie math.h par conséquent il vous faudra des fois compiler en utilisant les options -lm, ex :

    gcc -Wall exo_6_7.c -lm

En compilant ainsi vous obtiendrez un fichier a.out que vous pouvez exécuter en faisant tout simplement :
    
    ./a.out

exo8.c prend en paramètre un argument à l'exécution du programme, cet argument est supposé être un fichier texte existant dans le répertoire et que vous devez vous même créer, on peut utiliser fichier_exo8.txt en cas de besoin, l'exécution de ce fichier se fait comme ceci :

    ./a.out fichier_exo8.txt

Pour certains exercices des inputs vous seront demandés et pour d'autres non, à chaque fois qu'un input sera demandé quelque chose il vous le
sera indiqué.
