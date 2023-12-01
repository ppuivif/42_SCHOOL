Makefile or makefile

Nota (CHATGPT)
NAME et HEADER aren't standard functions but rather variables which can be used to custom running of Makefile.
NAME :

Souvent utilisé pour spécifier le nom de l'exécutable que vous souhaitez générer à partir de votre code source. Par exemple, si vous avez un programme en C, la variable NAME pourrait être utilisée pour définir le nom de l'exécutable que vous souhaitez générer.
Exemple :

make
NAME = mon_programme
all: $(NAME)

$(NAME): main.c functions.c
    gcc -o $(NAME) main.c functions.c

Ici, mon_programme est le nom de l'exécutable que vous allez créer en compilant main.c et functions.c.

HEADER :

Utilisé pour spécifier les fichiers d'en-tête (headers) à inclure dans la compilation. Les fichiers d'en-tête contiennent généralement les déclarations de fonctions et les prototypes nécessaires pour que le compilateur comprenne comment les fonctions sont définies dans d'autres fichiers source.
Exemple :

make
HEADER = myheader.h
all: my_program

my_program: main.c functions.c $(HEADER)
    gcc -o my_program main.c functions.c

Ici, myheader.h est un fichier d'en-tête inclus dans la compilation du programme.

Ces variables (comme NAME et HEADER) sont souvent utilisées pour rendre le Makefile plus générique et facilement configurable, permettant ainsi une gestion plus flexible des sources et des dépendances. Vous pouvez les adapter en fonction de la structure de votre projet.
