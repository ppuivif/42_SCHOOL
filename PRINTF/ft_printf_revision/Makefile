# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 11:25:27 by ppuivif           #+#    #+#              #
#    Updated: 2023/12/13 14:35:37 by ppuivif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
//la ligne declare une 'variable' CC
//la ligne contient le nom du compilateur a utiliser

CFLAGS=-Wall -Wextra -Werror -g
//la ligne declare une 'variable' CFLAGS
//la ligne contient les options de compilation

NAME=libftprintf.a
//la ligne declare une 'variable' NAME
//la ligne permet de specifier le nom de l'executable (.a ou archive) a generer en compilant le code source du projet

HEADER=libftprintf.h
//la ligne declare une 'variable' HEADER
//la ligne permet de specifier les fichiers d'en-tete (.h ou header) a inclure dans la compilation

SOURCES=ft_printf.c added_functions.c
//la ligne declare une variable SOURCE contenant la liste des fichiers source du projet

OBJECTS=$(SOURCES:.c=.o)
//la ligne declare une variable OBJECTS
//la ligne est une maniere concise de generer la liste des fichiers objets (temporaires) obtenus a partir des fichiers sources
//un fichier file.o est obtenu a partir du fichier file.c

all: $(NAME)
//cette ligne est une regle
//all est une cible (target) par defaut permettant d'executer la/les premieres instructions

$(NAME): $(OBJECTS)
//cette ligne est une regle
//$(NAME) est la syntaxe pour referencer la variable NAME prealablement declaree
//$(NAME) est la cible a construire, pour aboutir a la creation de l'executable libftprintf.h
//la regle appelle la variable OBJECTS qui contient la liste des fichiers .o obtenus a partir des fichiers .c
//la regle verifie que les fichiers objets sont plus recents que les fichiers sources correspondant
//si necessaire le Makefile reconstruit les fichiers objets

	ar -rcs $(NAME) $(OBJECTS)
//il s'agit d'une commande associee a la regle precedente
//cette commande permet donc de construire l'executable (compiler)
//ar est l'utilitaire d'archivage sous Linux
//-rcs sont les options associees
//r pour 'replace' les fichiers existants
//c pour 'create' l'archive
//s pour 'sort' (trier soit creer un index)

%.o : %.c $(HEADER)
//cette ligne est une regle
//la regle indique comment generer un fichier objet (%.o) a partir d'un fichier source correspondant (%.c)
//la variable HEADER represente la liste des fichiers d'en-tete necessaires pour la compilation
//%.o est la cible de la regle (% pour designer tous les fichiers .o)
//%.c specifie le fichier source correspondant a la cible (% pour designer tous les fichiers .c)
//$(HEADER) est specifie car la regle depend egalement des fichiers d'en-tete

	 $(CC) $(CFLAGS) -c $< -o $@
//
