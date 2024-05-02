//
//  mesfonctions.c
//  gestion de scolarité
//
//  Created by sarah haddad on 6/16/20.
//  Copyright © 2020 sarah haddad. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mesfonctions.h"
//les fonctions
//
//

int menu()
{
    int choix=0 ;
    int sin=0;
       printf("\n\n\n\n\n\n🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️◼️🎇🎇🎇◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇🎇🎇◼️◼️◼️◼️◼️🎇🎇🎇🎇◼️◼️🎇🎇🎇◼️◼️◼️◼️◼️🎇🎇🎇🎇◼️◼️🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇◼️🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️🎇🎇◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️◼️🎇🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇◼️🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇◼️🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️◼️🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇◼️◼️◼️◼️🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇◼️🎇🎇◼️🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇◼️🎇◼️🎇◼️◼️◼️◼️◼️◼️🎇◼️◼️🎇🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇◼️◼️◼️🎇🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇◼️🎇🎇◼️🎇🎇◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️🎇🎇◼️◼️◼️◼️◼️🎇🎇◼️◼️◼️🎇🎇🎇◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇◼️🎇🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️🎇◼️🎇🎇🎇🎇◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇🎇🎇◼️◼️◼️◼️◼️◼️🎇🎇🎇◼️◼️◼️🎇◼️◼️◼️◼️◼️◼️◼️◼️🎇🎇🎇🎇🎇◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️◼️🎆\n🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆\n\n\n\n\n");
       
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t 🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆                                                                                                                  🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t1. Afficher les noms des étudiant avec les informations nécessaires concernant les étudiants et les moudules.\t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t2. Afficher les moyennes des étudiant,la moyenne de chaque groupe et de la section.                          \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t3. Affichage du major de promotion.                                                                          \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t4. Insertion d'un nouvel étudiant.                                                                           \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t5. Mise à jour d'un étudiant et affichier toute ces informations.                                            \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t6. Suppression d'un étudiant.                                                                                \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t7. Insertion d'un nouveau module.                                                                            \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t8. Mise à jour d'un module.                                                                                  \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t9. Suppression d'un module.                                                                                  \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n");
            printf("\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t10. Quitter le programme.                                                                                    \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n\t\t \t\t\t\t\t\t\t\t\t\t\t🎆\t                                                                                                             \t🎆\n ");
    printf("\t\t \t\t\t\t\t\t\t\t\t\t\t 🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆\n");
    
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                          💫 quelle est votre choix ? :");
             scanf("%d",&choix);
            while(choix<1 || choix>10)
            {
                    sin=sin+1;
                    if (sin==3)
                    {
                        exit(EXIT_FAILURE);
                    }
                        
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ⚠️ entrez une valeur entre 1 et 10");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                          💫 quelle est votre choix ? :");
                    scanf("%d",&choix);
                
                
            }
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                          💫 votre choix est %d \n\n\n",choix);

                

   return choix ;
}
//
//
//
//
int Rechercher(long int m)
{
    FILE *fichier;
    Etudiant t[200];
    int i;
    fichier = fopen("Etudiant.bin", "rb");
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    rewind(fichier);
    fread(t,sizeof(Etudiant),200,fichier);
    
    i=0;
    while (i<(ftell(fichier)/sizeof(Etudiant)))
    {   if(t[i].matricule==m)
           {
               
               fclose(fichier);
               return i;
               
               
           }
    else {
        i++;
         
    }
        
    }
  
        fclose(fichier);
           return -1;
        
    
   
}


//
//
//

int Valide (Date d)
{
    int s,jMax=0;
    if(d.mois>0 && d.mois<13)
    {
        s=1;
    }
    else
    {
        return 0;
    }
   if (d.mois==1 || d.mois==3 ||d.mois==5 ||d.mois==7 ||d.mois==8 ||d.mois==10 ||d.mois==12 )
   {
       jMax=31;
   }
   if(d.mois==4 ||d.mois==6 ||d.mois==9 ||d.mois==11)
    {
        jMax=30;
    }
    if(d.mois==2)
    {
        
      if(d.annee % 4 == 0)
          
        {
            jMax=29;
        }
        else
        {
            jMax=28;
        }
    }
    
    if(s==1 && d.jour>0 && d.jour<=jMax)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//
//
//
void InsertionDUnNouvelEtudiant(void)
{
FILE *fichier;
    FILE* f;
       int i;
      Note tableau[15];
      Etudiant e;
      int s=0, w=0,sin=0;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t                                                                      \t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██╗███╗   ██╗███████╗███████╗██████╗ ████████╗██╗ ██████╗ ███╗   ██╗\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██║████╗  ██║██╔════╝██╔════╝██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██║██╔██╗ ██║███████╗█████╗  ██████╔╝   ██║   ██║██║   ██║██╔██╗ ██║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██║██║╚██╗██║╚════██║██╔══╝  ██╔══██╗   ██║   ██║██║   ██║██║╚██╗██║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██║██║ ╚████║███████║███████╗██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ╚═╝╚═╝  ╚═══╝╚══════╝╚══════╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t                                                                      \t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
          //MATRICULE
          printf("\n\n\n\n\n\n\n\t\t\t\t\t\t 💫 Pour ajouter un étudiant il faut saisir les informations suivante :   ");
          printf("\n\n\n\n\n\n\t\t\t\t\t\t                                 ——————————————————————————————————————————————————————————————————————————————————————————————————————————————");
          printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t     |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  |\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁤\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁤\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁥\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁥\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁦\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁦\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t                      MATRICULE  :       ");
    scanf("%ld",&e.matricule);
         while(e.matricule<101000000000 || e.matricule>191999999999 || Rechercher(e.matricule)!=-1)
    {
        sin=sin+1;
        if (sin==3)
        {
            exit(EXIT_FAILURE);
        }
            
        if(e.matricule<101000000000 || e.matricule>191999999999){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t ⚠️ entrez une valeur entre 101000000000 et 191999999999   \t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  MATRICULE  :");}
        if(Rechercher(e.matricule)!=-1)
        {
            
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t ⚠️ ce matricule existe déja entrez un autre  \t\t\t\t\t\t\t\t          🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  MATRICULE  :");
        }
        scanf("%ld",&e.matricule);

        
    }
          //NOM
          printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂒\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂓\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁼\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁦\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁷\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁯\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  NOM  :");
          scanf("%s",e.nom);
          //PRENOM
          printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁼\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁦\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁷\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁯\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  PRENOM  :");
          scanf("%s",e.prenom);
          //DATE DE NAISSANNCE
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨");
            while (w==0)
            {

          printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁼\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁦\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁷\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁯\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  DATE DE NAISSANCE  : jour : ");
          scanf("%d",&e.dateDeNaissannce.jour);
          printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   mois : ");
          scanf("%d",&e.dateDeNaissannce.mois);
          printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   année : ");
          scanf("%d",&e.dateDeNaissannce.annee);
          w=Valide(e.dateDeNaissannce);
          if(w==0)
          {
              printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t❌❌❌❌ Vous avez saisi une date erronée ‼️\t\t\t\t\t\t\t\t          🁨");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\tVeuillez réessayer :                         \t\t\t\t\t\t\t\t          🁨");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t                                             \t\t\t\t\t\t\t\t          🁨");
            }
            }
        //GROUPE
          printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁼\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁦\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁷\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁯\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  GROUPE :");
          scanf("%d",&e.groupe);
          while(e.groupe<1 || e.groupe>4)
           {
               printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t ⚠️ entrez une valeur entre 1 et 4  \t\t\t\t\t\t\t\t                  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t  GROUPE :");
               scanf("%d",&e.groupe);
           }
    //
    //
    //
    e.moyenne=0;
    //LES NOTES
    f=fopen("Modules.bin", "rb");
       if(f!=NULL)
       {
           rewind(f);
           fread(tableau, sizeof(Note), 15, f);
           for (i=0; i<(ftell(f)/sizeof(Note)); i++)
           {
               
               printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁼\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁩\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁦\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁷\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁪\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁯\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎");
               //TD
                   printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t // entrez les notes d'%s:  TD: ",tableau[i].nomDuModules);
                   
                   scanf("%f",&e.tab[i].td);
                   while (e.tab[i].td<0 || e.tab[i].td>20)
                   {
               
                   printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t          ⚠️ entrez une note entre 0 et 20  \t\t\t\t\t\t\t\t          🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t                                                  TD:");
                   scanf("%f",&e.tab[i].td);
                   }
             
               //EMD
               printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   EMD: ");
               scanf("%f",&e.tab[i].emd);
               
               while (e.tab[i].emd<0 || e.tab[i].emd>20)
               {
               
                   printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t          ⚠️ entrez une note entre 0 et 20  \t\t\t\t\t\t\t\t          🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t                                                  EMD:");
                   scanf("%f",&e.tab[i].emd);
                   }
               //TP
               if(tableau[i].tpexiste==1)
                        {
                                         printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   TP: ");
                                         scanf("%f",&e.tab[i].tp);
                                         while (e.tab[i].tp<0 || e.tab[i].tp>20)
                                         {
                                         
                                             printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁨\t\t\t\t\t\t          ⚠️ entrez une note entre 0 et 20  \t\t\t\t\t\t\t\t          🁨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🁫\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂎\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t  \t\t\t\t\t                                                  TP:");
                                             scanf("%f",&e.tab[i].tp);
                                         }
                          e.tab[i].moyennedumodule=(e.tab[i].emd +e.tab[i].tp+ e.tab[i].td +e.tab[i].emd)/4 ;
                            e.moyenne=e.moyenne +(e.tab[i].moyennedumodule *tableau[i].coef) ;
                            s=s+tableau[i].coef ;

                        }
               else
               {
                   e.tab[i].moyennedumodule=(e.tab[i].emd + e.tab[i].td +e.tab[i].emd)/3 ;
                   e.moyenne=e.moyenne +(e.tab[i].moyennedumodule *tableau[i].coef) ;
                   s=s+tableau[i].coef ;
               }

               
               
           }
           e.moyenne=e.moyenne/s;
           
           fclose(f);
           
       }
       else
       {
           printf("erreur");
       }
          
   
              
 
              //
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\t\t\t\t\t\t                                                                 email: ");
              scanf("%s",e.email);
              //
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\t\t\t\t\t\t                                                                 adresse: num:");
              scanf("%d",&e.adresse.num);
              //
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\t\t\t\t\t\t                                                                           rue:");
              scanf("%s",e.adresse.rue);
              //
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\t\t\t\t\t\t                                                                           ville:");
              scanf("%s",e.adresse.ville);
              //
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\t\t\t\t\t\t                                                                            wilaya:");
              scanf("%s",e.adresse.wilaya);
              //
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🂑\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  🂐");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  |");
              printf("\n\t\t\t\t\t\t                                 ——————————————————————————————————————————————————————————————————————————————————————————————————————————————");

           fichier = fopen("Etudiant.bin", "ab+");
           if (fichier==NULL)
           {
               fprintf(stderr, "Erreur ouverture fichier .\n");
               exit(EXIT_FAILURE);
           }

           fwrite(&e,sizeof(e),1,fichier);
    fclose(fichier);
    Rmenu();

}
void Afficher(void)
{
    FILE *fichier;
    Etudiant t[200];
    int i,j;
    long int jsp,idk;
    FILE* f;
    Note tableau[15];
    char chainea[20];
    long k,R;
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t                                                                      \t\t🎆");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t   █████╗ ███████╗███████╗██╗ ██████╗██╗  ██╗ █████╗  ██████╗ ███████ \t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██╔══██╗██╔════╝██╔════╝██║██╔════╝██║  ██║██╔══██╗██╔════╝ ██╔════╝\t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ███████║█████╗  █████╗  ██║██║     ███████║███████║██║  ███╗█████╗  \t\t🎆   ");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██╔══██║██╔══╝  ██╔══╝  ██║██║     ██╔══██║██╔══██║██║   ██║██╔══╝  \t\t🎆   ");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ██║  ██║██║     ██║     ██║╚██████╗██║  ██║██║  ██║╚██████╔╝███████╗\t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t  ╚═╝  ╚═╝╚═╝     ╚═╝     ╚═╝ ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝\t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t                                                                      \t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    sprintf(chainea," ");
    printf("\n\n\n\nAffichier les etudiants avec les informations nécessaires :\n\n\n");
    printf("\n ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————");
    printf("\n|  Matricules  |                Noms           |             Prénoms            ");
    f=fopen("Modules.bin", "rb");
    if(f!=NULL)
    {
        rewind(f);
        fread(tableau, sizeof(Note), 15, f);
        for (i=0; i<(ftell(f)/sizeof(Note)); i++)
        {
            R=(strlen(tableau[i].nomDuModules));
            for(k=R;k<14;k++)
            {
                strcat(tableau[i].nomDuModules, chainea);
            }
            printf("|%s",tableau[i].nomDuModules);
            
        }
        printf("|  Moyenne    | Groupe |");
    fichier = fopen("Etudiant.bin", "rb");
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    rewind(fichier);
    fread(t,sizeof(Etudiant),200,fichier);
        jsp=(ftell(fichier)/sizeof(Etudiant));
        idk=(ftell(f)/sizeof(Note));
        fclose(f);
        fclose(fichier);
        for (j=0; j<jsp; j++)
        {     R=(strlen(t[j].nom));
            for(k=R;k<29;k++)
            {
                strcat(t[j].nom, chainea);
            }
            R=(strlen(t[j].prenom));
            for(k=R;k<29;k++)
            {
                strcat(t[j].prenom, chainea);
            }
            printf("\n ———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————");
            printf("\n| %ld |  %s|   %s",t[j].matricule,t[j].nom,t[j].prenom);
            
            for (i=0; i<idk; i++)
            {
                
                if(t[j].tab[i].moyennedumodule<10)
                {
                    printf("|%f      ",t[j].tab[i].moyennedumodule);}
                else{
                    printf("|%f     ",t[j].tab[i].moyennedumodule);}
          
            }
            if(t[j].moyenne<10){
                printf("|%f ",t[j].moyenne);}
            else{ printf("|%f",t[j].moyenne);}
            printf("    |  %d     |",t[j].groupe);
        }
}
    printf("\n ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————");
    printf("\n\n\n\n\n\n");
    Rmenu();
}
void Moyenne()
{
    Etudiant t[200];
    FILE *fichier;
    long int jsp;
    int j;
    char chainea[20];
    long k,R,etuG1=0,etuG3=0,etuG2=0,etuG4=0;
    float moyenneG1=0,moyenneG2=0,moyenneG3=0,moyenneG4=0,moyennesection=0;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
                    printf("\n\t\t🎆\t\t                                                                                                                                                                                    🎆");

    printf("\n\t\t🎆\t\t   █████╗ ███████╗███████╗██╗ ██████╗██╗  ██╗ █████╗  ██████╗ ███████ \t██████╗ ███████╗███████╗    ███╗   ███╗ ██████╗ ██╗   ██╗███████╗███╗   ██╗███╗   ██╗███████╗███████╗\t\t🎆");
    printf("\n\t\t🎆\t\t  ██╔══██╗██╔════╝██╔════╝██║██╔════╝██║  ██║██╔══██╗██╔════╝ ██╔════╝\t██╔══██╗██╔════╝██╔════╝    ████╗ ████║██╔═══██╗╚██╗ ██╔╝██╔════╝████╗  ██║████╗  ██║██╔════╝██╔════╝\t\t🎆");
    printf("\n\t\t🎆\t\t  ███████║█████╗  █████╗  ██║██║     ███████║███████║██║  ███╗█████╗  \t██║  ██║█████╗  ███████╗    ██╔████╔██║██║   ██║ ╚████╔╝ █████╗  ██╔██╗ ██║██╔██╗ ██║█████╗  ███████╗\t\t🎆");
    printf("\n\t\t🎆\t\t  ██╔══██║██╔══╝  ██╔══╝  ██║██║     ██╔══██║██╔══██║██║   ██║██╔══╝  \t██║  ██║██╔══╝  ╚════██║    ██║╚██╔╝██║██║   ██║  ╚██╔╝  ██╔══╝  ██║╚██╗██║██║╚██╗██║██╔══╝  ╚════██║\t\t🎆   ");
    printf("\n\t\t🎆\t\t  ██║  ██║██║     ██║     ██║╚██████╗██║  ██║██║  ██║╚██████╔╝███████╗\t██████╔╝███████╗███████║    ██║ ╚═╝ ██║╚██████╔╝   ██║   ███████╗██║ ╚████║██║ ╚████║███████╗███████\t\t🎆");
    printf("\n\t\t🎆\t\t  ╚═╝  ╚═╝╚═╝     ╚═╝     ╚═╝ ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝\t╚═════╝ ╚══════╝╚══════╝    ╚═╝     ╚═╝ ╚═════╝    ╚═╝   ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═══╝╚══════╝╚══════╝\t\t🎆");
    printf("\n\t\t🎆\t\t                                                                                                                                                                                    🎆");
    printf("\n\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆\n\n\n\n");
    
    sprintf(chainea," ");
    fichier = fopen("Etudiant.bin", "rb");
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    rewind(fichier);
    fread(t,sizeof(Etudiant),200,fichier);
        jsp=(ftell(fichier)/sizeof(Etudiant));
      
        
        fclose(fichier);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t___________________________________________________________________________________________");
    
printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|              |                               |                                |         |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|  Matricules  |             Noms              |             Prénoms            | Moyenne |");
        for (j=0; j<jsp; j++)
    {
        R=(strlen(t[j].nom));
        for(k=R;k<29;k++)
        {
            strcat(t[j].nom, chainea);
        }
        R=(strlen(t[j].prenom));
        for(k=R;k<29;k++)
        {
            strcat(t[j].prenom, chainea);
        }
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|______________|_______________________________|________________________________|_________|");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|              |                               |                                |         |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t| %ld |  %s|   %s",t[j].matricule,t[j].nom,t[j].prenom);
        if(t[j].moyenne<10){
            printf("|%f |",t[j].moyenne);}
        else{ printf("|%f|",t[j].moyenne);}
        if (t[j].groupe==1) {
            etuG1=etuG1+1;
            moyenneG1=moyenneG1+t[j].moyenne;
        }
        if (t[j].groupe==2) {
            etuG2=etuG2+1;
            moyenneG2=moyenneG2+t[j].moyenne;
        }
        if (t[j].groupe==3) {
            etuG3=etuG3+1;
            moyenneG3=moyenneG3+t[j].moyenne;
        }
        if (t[j].groupe==4) {
            etuG4=etuG4+1;
            moyenneG4=moyenneG4+t[j].moyenne;
        }
        moyennesection=moyennesection+t[j].moyenne;
    }
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|______________|_______________________________|________________________________|_________|");
    moyennesection=moyennesection/jsp;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.——————————————————————————————————————————————————————————————————————————.");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|         |            |            |            |            |            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|    /    |  Groupe 1  |  Groupe 2  |  Groupe 3  |  Groupe 4  |   Section  |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|         |            |            |            |            |            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.—————————|————————————|————————————|————————————|————————————|————————————|");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|         |            |            |            |            |            |");

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t| Moyenne ");
    
    if(etuG1==0){printf("|  00.000000 ");}
    else{
        moyenneG1=moyenneG1/etuG1;
        if (moyenneG1>=10) {
            printf("|  %f ",moyenneG1);
        }
        else{
            printf("|  0%f ",moyenneG1);
            
        }
        
    }
    if(etuG2==0){printf("|  00.000000 ");}
    else{
        moyenneG2=moyenneG2/etuG2;
        if (moyenneG2>=10) {
            printf("|  %f ",moyenneG2);
        }
        else{
            printf("|  0%f ",moyenneG2);
            
        }
        
    }
    if(etuG3==0){printf("|  00.000000 ");}
    else{
        
        moyenneG3=moyenneG3/etuG3;
        if (moyenneG3>=10) {
            printf("|  %f ",moyenneG3);
        }
        else{
            printf("|  0%f ",moyenneG3);
            
        }
        
        
    }
    if(etuG4==0){printf("|  00.000000 ");}
    else{
        moyenneG4=moyenneG4/etuG4;
        if (moyenneG4>=10) {
            printf("|  %f ",moyenneG4);
        }
        else{
            printf("|  0%f ",moyenneG4);
            
        }
        
    }
    if(moyennesection>=10)
    {
    printf("|  %f |",moyennesection);
        
    }
    else
    {
        printf("|  0%f |",moyennesection);
        
    }
   
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|_________|____________|____________|____________|____________|____________|\n");
    Rmenu();
}
void AffichierLeMajor(void)
{
    Etudiant t[200];
    FILE *fichier;
    long int jsp,idk;
    Etudiant em;
    int j;
    int i;

    FILE* f;
    Note tableau[15];
    char chainea[20];
    long k,R;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t    🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    printf("\n\t\t\t\t\t\t🎆                                                                                                                                                               🎆");
    printf("\n\t\t\t\t\t\t🎆\t\t  ███╗   ███╗ █████╗      ██╗ ██████╗ ██████╗     ██████╗ ███████╗    ██████╗ ██████╗  ██████╗ ███╗   ███╗ ██████╗ ████████╗██╗ ██████╗ ███╗   ██╗\t\t 🎆\t\t\n\t\t\t\t\t\t🎆\t\t  ████╗ ████║██╔══██╗     ██║██╔═══██╗██╔══██╗    ██╔══██╗██╔════╝    ██╔══██╗██╔══██╗██╔═══██╗████╗ ████║██╔═══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\t\t 🎆\t\t\n\t\t\t\t\t\t🎆\t\t  ██╔████╔██║███████║     ██║██║   ██║██████╔╝    ██║  ██║█████╗      ██████╔╝██████╔╝██║   ██║██╔████╔██║██║   ██║   ██║   ██║██║   ██║██╔██╗ ██║\t\t 🎆\t\t\n\t\t\t\t\t\t🎆\t\t  ██║╚██╔╝██║██╔══██║██   ██║██║   ██║██╔══██╗    ██║  ██║██╔══╝      ██╔═══╝ ██╔══██╗██║   ██║██║╚██╔╝██║██║   ██║   ██║   ██║██║   ██║██║╚██╗██║\t\t 🎆\t\t\n\t\t\t\t\t\t🎆\t\t  ██║ ╚═╝ ██║██║  ██║╚█████╔╝╚██████╔╝██║  ██║    ██████╔╝███████╗    ██║     ██║  ██║╚██████╔╝██║ ╚═╝ ██║╚██████╔╝   ██║   ██║╚██████╔╝██║ ╚████║\t\t 🎆\t\t\n\t\t\t\t\t\t🎆\t\t  ╚═╝     ╚═╝╚═╝  ╚═╝ ╚════╝  ╚═════╝ ╚═╝  ╚═╝    ╚═════╝ ╚══════╝    ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚═╝ ╚═════╝    ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\t\t 🎆");
    printf("\n\t\t\t\t\t\t🎆                                                                                                                                                               🎆");
    printf("\n\t\t\t\t\t\t🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    
    sprintf(chainea," ");
    fichier = fopen("Etudiant.bin", "rb");
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    rewind(fichier);
    fread(t,sizeof(Etudiant),200,fichier);
        jsp=(ftell(fichier)/sizeof(Etudiant));
      
        
        
     em=t[0];
    for (j=1; j<jsp; j++)
    {
        if (em.moyenne<t[j].moyenne) {
            em=t[j];
        }
    }

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Nom:%s\t\tPrenom:%s\t\tMatricule:%ld",em.nom,em.prenom,em.matricule);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t______________________________________________________________");
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                        |            |                       |");
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|        Matières        |    Coef    |      Moyenne /20      |");
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|________________________|____________|_______________________|");

f=fopen("Modules.bin", "rb");
    
if(f!=NULL)
{
    rewind(f);
    fread(tableau, sizeof(Note), 15, f);
    for (i=0; i<(ftell(f)/sizeof(Note)); i++)
    {
        R=(strlen(tableau[i].nomDuModules));
        for(k=R;k<14;k++)
        {
            strcat(tableau[i].nomDuModules, chainea);
        }
        idk=(ftell(f)/sizeof(Note));
       
              
             
        
        if (em.tab[i].moyennedumodule>=10) {
             printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                        |            |                       |");
                   printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|          %s|      %d     |  %f            |",tableau[i].nomDuModules,tableau[i].coef,em.tab[i].moyennedumodule);
                   printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|________________________|____________|_______________________|");
        }
       
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                        |            |                       |");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|          %s|      %d     |  0%f            |",tableau[i].nomDuModules,tableau[i].coef,em.tab[i].moyennedumodule);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|________________________|____________|_______________________|");
            
        }
    

}
fclose(fichier);
    fclose(f);
}
printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                                     |");
    if (em.moyenne>=10) {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|Moyenne:%f                    |",em.moyenne);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|Résultat:ADM                         |");
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|Moyenne:0%f                    |",em.moyenne);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|Résultat:AJR                         |");

        
    }
    
    
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|_____________________________________|");

    Rmenu();
}
void MiseAJour(void)
{
    FILE *fichier;
    Etudiant t[200];
    int long matetu;
    int i,j,a,p,w=0,sin=0,s;
    char chainea[20];
    int long k,R,jsp,S=0;
    Note tableau[15];
    FILE *f = NULL;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆                                                                                          🎆");
    
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t███╗   ███╗██╗███████╗███████╗     █████╗          ██╗ ██████╗ ██╗   ██╗██████╗\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t████╗ ████║██║██╔════╝██╔════╝    ██╔══██╗         ██║██╔═══██╗██║   ██║██╔══██╗\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t██╔████╔██║██║███████╗█████╗      ███████║         ██║██║   ██║██║   ██║██████╔╝\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t██║╚██╔╝██║██║╚════██║██╔══╝      ██╔══██║    ██   ██║██║   ██║██║   ██║██╔══██╗\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t██║ ╚═╝ ██║██║███████║███████╗    ██║  ██║    ╚█████╔╝╚██████╔╝╚██████╔╝██║  ██║\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t╚═╝     ╚═╝╚═╝╚══════╝╚══════╝    ╚═╝  ╚═╝     ╚════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🎆                                                                                          🎆\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    
    sprintf(chainea," ");
    printf("\nentrez le matricule de l'étudiant:");
    scanf("%ld",&matetu);
     
    if(Rechercher(matetu)!=-1){
        fichier = fopen("Etudiant.bin", "rb");
        if (fichier==NULL)
        {
            fprintf(stderr, "Erreur ouverture fichier .\n");
            exit(EXIT_FAILURE);
        }
        rewind(fichier);
        fread(t,sizeof(Etudiant),200,fichier);
        jsp=(ftell(fichier)/sizeof(Etudiant));
        fclose(fichier);
        
        
        printf("\nvoici toute les informations sur l'étudiant:");
        i=Rechercher(matetu);
        printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t_____________________________________________________________________________________________");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| INFOS GÉNÉRALES                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________________________________________________________________________|");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        R=(strlen(t[i].nom));
        for(k=R;k<29;k++)
        {
            strcat(t[i].nom, chainea);
        }
        R=(strlen(t[i].prenom));
        for(k=R;k<29;k++)
        {
            strcat(t[i].prenom, chainea);
        }
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| NOM: %s      PRÉNOM: %s              |",t[i].nom,t[i].prenom);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| DATE DE NAISSANCE: ");
        if (t[i].dateDeNaissannce.jour<10) {
            printf("/0%d/",t[i].dateDeNaissannce.jour);
        }
        else{
            printf("/%d/",t[i].dateDeNaissannce.jour);
        }
        
        
        
        if (t[i].dateDeNaissannce.mois<10) {
            printf("0%d",t[i].dateDeNaissannce.mois);
        }
        else{
            printf("%d",t[i].dateDeNaissannce.mois);
        }
        
        printf("/%d/                                                            |",t[i].dateDeNaissannce.annee);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| ADRESSE: ");
        if (t[i].adresse.num<10) {
            printf("0000%d",t[i].adresse.num);
        }
        else
        {
            if (t[i].adresse.num<100 && t[i].adresse.num>=10) {
                printf("000%d",t[i].adresse.num);
            }
            
            if (t[i].adresse.num<1000 && t[i].adresse.num>=100) {
                printf("00%d",t[i].adresse.num);
            }
            if (t[i].adresse.num<10000 && t[i].adresse.num>=1000) {
                printf("0%d",t[i].adresse.num);
            }
            if (t[i].adresse.num<100000 && t[i].adresse.num>=10000) {
                printf("%d",t[i].adresse.num);
            }
            
        }
        R=(strlen(t[i].adresse.rue));
        for(k=R;k<36;k++)
        {
            strcat(t[i].adresse.rue, chainea);
        }
        R=(strlen(t[i].adresse.ville));
        for(k=R;k<19;k++)
        {
            strcat(t[i].adresse.ville, chainea);
        }
        R=(strlen(t[i].adresse.wilaya));
        for(k=R;k<19;k++)
        {
            strcat(t[i].adresse.wilaya, chainea);
        }
        printf("/%s/%s/%s|",t[i].adresse.rue,t[i].adresse.ville,t[i].adresse.wilaya);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        R=(strlen(t[i].email));
        for(k=R;k<39;k++)
        {
            strcat(t[i].email, chainea);
        }
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| EMAIL: %s                                             |",t[i].email);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________________________________________________________________________|");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| SCOLARITÉ                                                                                  |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________________________________________________________________________|");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| MATRICULE:%ld                                                                     |",t[i].matricule);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| DOMAINE: LIC.LI(A90)                                                                       |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| SECTION:07                                                                                 |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| GROUPE:0%d                                                                                  |",t[i].groupe);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________________________________________________________________________|");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                                                                            |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| NOTE                                                                                       |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________________________________________________________________________|");
        f=fopen("Modules.bin", "rb");
        if(f!=NULL)
        {
            rewind(f);
            fread(tableau, sizeof(Note), 15, f);
            
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                            |              |              |               |                 |");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|        NOM DU MODULE       |      TD      |      TP      |      EMD      |     MOYENNE     |");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________|______________|______________|_______________|_________________|");
            for (j=0; j<(ftell(f)/sizeof(Note)); j++)
            {S=S+tableau[j].coef;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                            |              |              |               |                 |");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                            |              |              |               |                 |");
                R=(strlen(tableau[j].nomDuModules));
                for(k=R;k<14;k++)
                {
                    strcat(tableau[j].nomDuModules, chainea);
                }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|              %s|",tableau[j].nomDuModules);
                if (t[i].tab[j].td<10) {
                    printf("   0%f  |",t[i].tab[j].td);
                }
                else
                {
                    printf("   %f  |",t[i].tab[j].td);
                }
                if (tableau[j].tpexiste==0) {
                    printf("       X      |");
                }
                else
                {
                    if (t[i].tab[j].tp<10) {
                        printf("   0%f  |",t[i].tab[j].tp);
                    }
                    else
                    {
                        printf("   %f  |",t[i].tab[j].tp);
                    }
                    
                }
                if (t[i].tab[j].emd<10) {
                    printf("    0%f  |",t[i].tab[j].emd);
                }
                else
                {
                    printf("    %f  |",t[i].tab[j].emd);
                }
                if (t[i].tab[j].moyennedumodule<10) {
                    printf("     0%f   |",t[i].tab[j].moyennedumodule);
                }
                else
                {
                    printf("     %f   |",t[i].tab[j].moyennedumodule);
                }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                            |              |              |               |                 |");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|____________________________|______________|______________|_______________|_________________|");
                
                
                
            }
        }
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                       |");
        if (t[i].moyenne<10) {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| MOYENNE GÉNÉRAL:0%f             |",t[i].moyenne);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                       |");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| RÉSULTAT: AJR                         |");
            
        }
        else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| MOYENNE GÉNÉRAL:%f             |",t[i].moyenne);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|                                       |");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t| RÉSULTAT: ADM                         |");
        }
        
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|_______________________________________|");
        printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la partie INFOS GÉNÉRALES entrez 1                         ✨");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la partie SCOLARITÉ entrez 2                               ✨");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la partie NOTES entrez 3                                   ✨");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous ne voulez rien modifier entrez 4                                           ✨");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ entrez votre choix (⚠️ entre 1 et 4):");
        
        scanf("%d",&a);
        if(a<5 && a>0){
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
            
            switch (a) {
                case 1:
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ QU'EST-CE Que Vous Voulez modifier dans la partie INFOS GÉNÉRALES:                 ✨ \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier le NOM entrez 1                                            ✨ \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier le PRÉNOM entrez 2                                         ✨ \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la DATE DE NAISSANCE entrez 3                              ✨        \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier l'ADRESSE entrez 4                                         ✨ \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier le'EMAIL entrez 5                                          ✨");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t            ->>>");
                    scanf("%d",&p);
                    
                    switch (p) {
                        case 1:
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tentrez un nouveau NOM : ");
                            scanf("%s",t[i].nom);
                            break;
                        case 2:
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tentrez un nouveau PRÉNOM : ");
                            scanf("%s",t[i].prenom);
                            break;
                        case 3:
                            while (w==0)
                            {
                                
                                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tDATE DE NAISSANCE  : jour : ");
                                scanf("%d",&t[i].dateDeNaissannce.jour);
                                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tmois : ");
                                scanf("%d",&t[i].dateDeNaissannce.mois);
                                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tannée : ");
                                scanf("%d",&t[i].dateDeNaissannce.annee);
                                w=Valide(t[i].dateDeNaissannce);
                                if(w==0)
                                {
                                    
                                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\t❌❌❌❌ Vous avez saisi une date erronée ‼️");
                                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tVeuillez réessayer :                         ");
                                    
                                }
                            }
                            break;
                        case 4:
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tentrez une nouvelle adresse :");
                            
                            printf("\t\t\t\t\t\t                                                                           num:");
                             scanf("%d",&t[i].adresse.num);
                            //
                            
                            printf("\t\t\t\t\t\t                                                                           rue:");
                             scanf("%s",t[i].adresse.rue);
                            //
                            
                            printf("\t\t\t\t\t\t                                                                           ville:");
                            scanf("%s",t[i].adresse.ville);
                            //
                           
                            printf("\t\t\t\t\t\t                                                                            wilaya:");
                            
                            scanf("%s",t[i].adresse.wilaya);
                            break;
                            
                            case 5:
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tentrez une nouvelle adresse électronique :");
                            scanf("%s",t[i].email);
                            break;
                            
                            
                        default:exit(EXIT_SUCCESS);
                            break;
                    }
                    
                    
                    break;
                case 2:
                    printf("\nQU'EST-CE Que Vous Voulez modifier dans la partie SCOLARITÉ:\nsi vous voulez modifier le MATRICULE entrez 1\nsi vous voulez modifier le GROUPE entrez 2\n");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ QU'EST-CE Que Vous Voulez modifier dans la partie INFOS GÉNÉRALES:                 ✨                                            \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier le MATRICULE entrez 1                                      ✨ \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier le GROUPE entrez 2                                         ✨ ");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t            ->>>");
                    scanf("%d",&p);
                    switch (p) {
                        case 1:
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tentrez un nouveau matricule :");
                            scanf("%ld",&t[i].matricule);
                            while(t[i].matricule<101000000000 || t[i].matricule>191999999999 || Rechercher(t[i].matricule)==-1)
                            {
                                sin=sin+1;
                                if (sin==3)
                                {
                                    exit(EXIT_FAILURE);
                                }
                                
                                if(t[i].matricule<101000000000 || t[i].matricule>191999999999){
                                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t ⚠️ entrez une valeur entre 101000000000 et 191999999999   \n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\tMATRICULE  :");}
                                if(Rechercher(t[i].matricule)==-1)
                                {
                                    
                                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t ⚠️ ce matricule existe déja entrez un autre  \n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t  MATRICULE  :");
                                }
                                scanf("%ld",&t[i].matricule);
                                
                                
                            }
                            break;
                        case 2:
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t \t\t\t\t\t\tentrez le nouveau groupe :");
                            scanf("%d",&t[i].groupe);
                            break;
                            
                        default:
                            break;
                    }
                    break;
                case 3:
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨       QU'EST-CE Que Vous Voulez modifier dans la partie NOTES    ✨");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨                                                                  ✨");
                    for (j=0; j<(ftell(f)/sizeof(Note)); j++)
                    {
                        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier les notes de ^%s^ entrez %d   ✨",tableau[j].nomDuModules,j);
                        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨                                                                  ✨");
                    }
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-->>>");
                    scanf("%d",&p);
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ QU'EST-CE Que Vous Voulez modifier dans ce module:      ✨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨                                                         ✨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la note du TD entrez 1          ✨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨                                                         ✨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la note du EMD entrez 2         ✨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨                                                         ✨ ");
                    if (tableau[p].tpexiste==1) {
                        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨ si vous voulez modifier la note du TP entrez 3          ✨\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨                                                         ✨");
                    }
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨✨");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t--->>>");
                    scanf("%d",&s);
                    if(s<4 && s>0){
                        if (s==1) {
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tentrez la nouvelle note du TD: ");
                            scanf("%f",&t[i].tab[p].td);
                            while (t[i].tab[p].td<0 || t[i].tab[p].td>20)
                            {
                                
                                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t⚠️ entrez une note entre 0 et 20\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTD:");
                                scanf("%f",&t[i].tab[p].td);
                            }
                        }
                        if (s==2) {
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tentrez la nouvelle note du EMD: ");
                            scanf("%f",&t[i].tab[p].emd);
                            while (t[i].tab[p].emd<0 || t[i].tab[p].emd>20)
                            {
                                
                                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t⚠️ entrez une note entre 0 et 20\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tEMD:");
                                scanf("%f",&t[i].tab[p].emd);
                            }
                        }
                        if (s==3 &&tableau[p].tpexiste==1 ) {
                            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tentrez la nouvelle note du TP: ");
                            scanf("%f",&t[i].tab[p].tp);
                            while (t[i].tab[p].tp<0 || t[i].tab[p].tp>20)
                            {
                                
                                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t⚠️ entrez une note entre 0 et 20\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTP:");
                                scanf("%f",&t[i].tab[p].tp);
                            }
                        }
                        t[i].moyenne=((t[i].moyenne)*S)-((t[i].tab[p].moyennedumodule)*tableau[p].coef);
                        if(tableau[p].tpexiste==1){
                            t[i].tab[p].moyennedumodule=(t[i].tab[p].emd +t[i].tab[p].emd+t[i].tab[p].td+t[i].tab[p].tp)/4;
                        }
                        else{
                            t[i].tab[p].moyennedumodule=(t[i].tab[p].emd +t[i].tab[p].emd+t[i].tab[p].td)/3;
                        }
                        if (S!=0) {
                            t[i].moyenne=((t[i].moyenne)+((t[i].tab[p].moyennedumodule)*tableau[p].coef))/S;
                        }
                    }
                    break;
                    
                    
                    
                default: exit(EXIT_FAILURE);
                    break;
            }
            fichier = fopen("Etudiant.bin", "wb+");
            if (fichier==NULL)
            {
                fprintf(stderr, "Erreur ouverture fichier .\n");
                exit(EXIT_FAILURE);
            }
            fwrite(t,sizeof(Etudiant),jsp,fichier);
            fclose(fichier);
            
        }
    fclose(f);
    }
    else {
        printf("\nil n'existe pas\n");
    }
    Rmenu();
}

void SuppressionDunEtudiant(void)
{
    FILE *fichier=NULL;
    Etudiant t[200];
    int long matetu, jsp;
    int i;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t 🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
                         printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆                                                                                                  🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t███████╗██╗   ██╗██████╗ ██████╗ ██████╗ ███████╗███████╗███████╗██╗ ██████╗ ███╗   ██╗\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t██╔════╝██║   ██║██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝██║██╔═══██╗████╗  ██║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t███████╗██║   ██║██████╔╝██████╔╝██████╔╝█████╗  ███████╗███████╗██║██║   ██║██╔██╗ ██║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t╚════██║██║   ██║██╔═══╝ ██╔═══╝ ██╔══██╗██╔══╝  ╚════██║╚════██║██║██║   ██║██║╚██╗██║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t███████║╚██████╔╝██║     ██║     ██║  ██║███████╗███████║███████║██║╚██████╔╝██║ ╚████║\t\t🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆\t\t╚══════╝ ╚═════╝ ╚═╝     ╚═╝     ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝\t\t🎆");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🎆                                                                                                  🎆\n\t\t\t\t\t\t\t\t\t\t\t\t\t 🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆🎆");
    
    printf("\nentrez le matricule de l'étudiant:");
    scanf("%ld",&matetu);
    if (Rechercher(matetu)!=-1)
    {
        fichier = fopen("Etudiant.bin", "rb");
        if (fichier==NULL)
        {
            fprintf(stderr, "Erreur ouverture fichier .\n");
            exit(EXIT_FAILURE);
        }
        rewind(fichier);
        fread(t,sizeof(Etudiant),200,fichier);
        jsp=(ftell(fichier)/sizeof(Etudiant));
        fclose(fichier);
        i=Rechercher(matetu);
        for (i=Rechercher(matetu); i<jsp; i++) {
            t[i]=t[i+1];
        }
        fichier = fopen("Etudiant.bin", "wb+");
        if (fichier==NULL)
        {
            fprintf(stderr, "Erreur ouverture fichier .\n");
            exit(EXIT_FAILURE);
        }
        rewind(fichier);
        jsp=jsp-1;
        fwrite(t,sizeof(Etudiant),jsp,fichier);
        printf("\nl'étudiant n'existe plus\n");
    }
    else{
        printf("\nil n'existe pas\n");
    }
    fclose(fichier);
    Rmenu();
}



void InsertionDunModule()
{
    FILE*f;
    Note m;
    FILE*fichier;
    Etudiant t[200];
    int i,S,Sc;
    long int j,e,b;
    Note tableau[15];
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t                                                                      \t\t🌌");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t  ██╗███╗   ██╗███████╗███████╗██████╗ ████████╗██╗ ██████╗ ███╗   ██╗\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t  ██║████╗  ██║██╔════╝██╔════╝██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t  ██║██╔██╗ ██║███████╗█████╗  ██████╔╝   ██║   ██║██║   ██║██╔██╗ ██║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t  ██║██║╚██╗██║╚════██║██╔══╝  ██╔══██╗   ██║   ██║██║   ██║██║╚██╗██║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t  ██║██║ ╚████║███████║███████╗██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t  ╚═╝╚═╝  ╚═══╝╚══════╝╚══════╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝\t\t🌌");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t                                                                      \t\t🌌");

                            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌");
    
    printf("\n\n💫 entrez le nom du nouveau module\n--->>");
    scanf("%s",m.nomDuModules);
    printf("\n\n💫 entrez la coef du nouveau module\n--->>");
    scanf("%d",&m.coef);
    printf("\n\n💫 si le module n'a pas de tp entrez 0 sinon entrez 1\n--->>");
    scanf("%d",&m.tpexiste);
    fichier = fopen("Etudiant.bin", "rb");
    f=fopen("Modules.bin", "rb");
    if(f==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
        rewind(f);
        fread(tableau, sizeof(Note), 15, f);
         
        j=((ftell(f))/(sizeof(Note)));
        b=((ftell(f))/(sizeof(Note)))+1;
        
        

        
    if(fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
        
    }
        rewind(f);
        fread(t, sizeof(Etudiant), 200, fichier);
        e=(ftell(fichier)/sizeof(Etudiant));
    printf("%ld",j);
        
    for (i=0; i<(ftell(fichier)/sizeof(Etudiant)); i++)
    {
        printf("\n\n💫 enter les note de %s pour %s %s  (%ld)",m.nomDuModules,t[i].nom,t[i].prenom,t[i].matricule);
        printf("\n\nTD:");
        scanf("%f",&t[i].tab[j].td);
        printf("\n\nEMD:");
        scanf("%f",&t[i].tab[j].emd);
        if (m.tpexiste==1) {
            printf("\n\nTP:");
            scanf("%f",&t[i].tab[j].tp);
            t[i].tab[j].moyennedumodule=(t[i].tab[j].tp+t[i].tab[j].td+t[i].tab[j].emd+t[i].tab[j].emd)/4;
           
            
        }
        else
        {
            t[i].tab[j].moyennedumodule=(+t[i].tab[j].td+t[i].tab[j].emd+t[i].tab[j].emd)/3;
            
            
        }
        t[i].moyenne=t[i].tab[j].moyennedumodule*m.coef;
         Sc=m.coef;
        for (S=0; S<j; S++) {
            t[i].moyenne=(t[i].tab[S].moyennedumodule*tableau[S].coef)+t[i].moyenne;
            Sc=Sc+tableau[S].coef;
        }
        if (Sc!=0) {
            t[i].moyenne=t[i].moyenne/Sc;
        }
          
           
        
    }
    
    
    
    fclose(f);
    fclose(fichier);
    fichier = fopen("Etudiant.bin", "wb+");
    f=fopen("Modules.bin", "ab+");
     if(f==NULL){
    fprintf(stderr, "Erreur ouverture fichier .\n");
    exit(EXIT_FAILURE);
     }
        fwrite(&m, sizeof(Note), 1, f);
  

        
    if(fichier==NULL)
    {
       fprintf(stderr, "Erreur ouverture fichier .\n");
       exit(EXIT_FAILURE);
        
    }
    fwrite(t, sizeof(Etudiant), e, fichier);
    fclose(f);
    fclose(fichier);
    
    Rmenu();
    
    
}
    
void MiseaJourDunModule(void)
{
    int a,i,p,j,k;
    Note tableau[15];
    FILE *f = NULL;
    Etudiant t[200];
    int S=0;
    FILE *fichier = NULL;
    long int e=0,m=0;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌");        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌                                                                                          🌌");
      
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t███╗   ███╗██╗███████╗███████╗     █████╗          ██╗ ██████╗ ██╗   ██╗██████╗\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t████╗ ████║██║██╔════╝██╔════╝    ██╔══██╗         ██║██╔═══██╗██║   ██║██╔══██╗\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t██╔████╔██║██║███████╗█████╗      ███████║         ██║██║   ██║██║   ██║██████╔╝\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t██║╚██╔╝██║██║╚════██║██╔══╝      ██╔══██║    ██   ██║██║   ██║██║   ██║██╔══██╗\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t██║ ╚═╝ ██║██║███████║███████╗    ██║  ██║    ╚█████╔╝╚██████╔╝╚██████╔╝██║  ██║\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t╚═╝     ╚═╝╚═╝╚══════╝╚══════╝    ╚═╝  ╚═╝     ╚════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t🌌                                                                                         🌌\t\t");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t 🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌");
    
    
    fichier = fopen("Etudiant.bin", "rb");
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    rewind(fichier);

    fread(t,sizeof(Etudiant), 200, fichier);
    
    f=fopen("Modules.bin", "rb");
    
    if(f==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
        
    }
    
        rewind(f);
        fread(tableau, sizeof(Note), 15, f);
        m=ftell(f)/sizeof(Note);
        for (i=0; i<(ftell(f)/sizeof(Note)); i++)
        {
            
            printf("\n\n si vous voulez modifier  ^%s^ entrez %d   ",tableau[i].nomDuModules,i);
            S=S+tableau[i].coef;
        }
        
        printf("-->>");
        scanf("%d",&p);
    printf("\n\n💫 QU'EST-CE Que Vous Voulez modifier :");
    printf("\n\n💫 entrez ^ 1 ^ pour modifier le nom du module");
    printf("\n\n💫 entrez ^ 2 ^ pour modifier la coef du module");
    printf("\n\n💫 entrez ^ 3 ^ pour ajouter ou supprimer le tp ");
    printf("\n\n-->>>");
    scanf("%d",&a);
    
    switch (a) {
        case 1:
            printf("\n\n💫 entrez le nouveau nom du module");
            printf("\n\n-->>>");
            scanf("%s",tableau[p].nomDuModules);
            
            break;
            case 2:
            k=tableau[p].coef;
            printf("\n\n💫 entrez la nouvelle coef");
            printf("\n\n-->>>");
            scanf("%d",&tableau[p].coef);
            e=ftell(fichier)/sizeof(Etudiant);
            for (j=0; j<ftell(fichier)/sizeof(Etudiant); j++)
            {
                if ((S-k+tableau[p].coef)!=0)
                {
                    t[j].moyenne=(((t[j].moyenne)*S)+((t[j].tab[p].moyennedumodule*tableau[p].coef)-(k*t[j].tab[p].moyennedumodule)))/(S-k+tableau[p].coef);
                }
                
            }
            
            break;
            case 3:
            if (tableau[i].tpexiste==1) {
                printf("\n\n💫 le tp est supprimé");
                for (j=0; j<ftell(fichier)/sizeof(Etudiant); j++)
                {
                    if(S!=0){
                    t[j].moyenne=(S*t[j].moyenne)-(t[j].tab[p].moyennedumodule*tableau[p].coef);
                    t[j].tab[p].moyennedumodule=(t[j].tab[p].td+t[j].tab[p].emd+t[j].tab[p].emd)/3;
                    t[j].moyenne=((t[j].tab[p].moyennedumodule*tableau[p].coef)+(t[j].moyenne))/S;
                    }
                    
                }
            }
            else
            {
               printf("\n\n💫 le tp est ajouté");
                
                for (j=0; j<ftell(fichier)/sizeof(Etudiant); j++)
                {
                    printf("donnez la note du tp pour l'étudiant:%s %s (%ld)\n-->>",t[j].nom,t[j].prenom,t[j].matricule);
                    scanf("%f",&t[j].tab[p].tp);
                    
                    t[j].moyenne=(S*t[j].moyenne)-(t[j].tab[p].moyennedumodule*tableau[p].coef);
                    t[j].tab[p].moyennedumodule=(t[j].tab[p].td+t[j].tab[p].emd+t[j].tab[p].emd+t[j].tab[p].tp)/4;
                    t[j].moyenne=((t[j].tab[p].moyennedumodule*tableau[p].coef)+(t[j].moyenne))/S;
                }
                
            }
            
            break;
            
        default:
            break;
    
    
    
}
  fclose(f);
    fclose(fichier);
    fopen("Etudiant.bin", "wb+");
    fopen("Modules.bin", "wb+");
    if (f==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    fwrite(t,sizeof(Etudiant),e,fichier);
    fwrite(tableau, sizeof(Note), m, f);
    
    fclose(f);
    fclose(fichier);
    Rmenu();
}
void SuppressionDunModule(void)
{
    int i,p,j;
    Note tableau[15];
    FILE *f;
    Etudiant t[200];
    int S=0;
    FILE *fichier;
    long int e=0 ,m=0;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌");
                         printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌                                                                                                  🌌");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t███████╗██╗   ██╗██████╗ ██████╗ ██████╗ ███████╗███████╗███████╗██╗ ██████╗ ███╗   ██╗\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t██╔════╝██║   ██║██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝██║██╔═══██╗████╗  ██║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t███████╗██║   ██║██████╔╝██████╔╝██████╔╝█████╗  ███████╗███████╗██║██║   ██║██╔██╗ ██║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t╚════██║██║   ██║██╔═══╝ ██╔═══╝ ██╔══██╗██╔══╝  ╚════██║╚════██║██║██║   ██║██║╚██╗██║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t███████║╚██████╔╝██║     ██║     ██║  ██║███████╗███████║███████║██║╚██████╔╝██║ ╚████║\t\t🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌\t\t╚══════╝ ╚═════╝ ╚═╝     ╚═╝     ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝\t\t🌌");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌                                                                                                  🌌\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌🌌\n");
    fichier = fopen("Etudiant.bin", "rb");
    fread(t,sizeof(Etudiant), 200, fichier);
    f=fopen("Modules.bin", "rb");
    
    if(f!=NULL)
    {
        
        rewind(f);
        fread(tableau, sizeof(Note), 15, f);
        m=(ftell(f)/sizeof(Note))-1;
        for (i=0; i<(ftell(f)/sizeof(Note)); i++)
        {
            
            printf("\n\n si vous voulez supprimer ^%s^ entrez %d   ",tableau[i].nomDuModules,i);
        
            S=S+tableau[i].coef;
        }
        
        if (fichier==NULL)
        {
            fprintf(stderr, "Erreur ouverture fichier .\n");
            exit(EXIT_FAILURE);
        }
        printf("\n\n                                  -->>");
        scanf("%d",&p);
        e=ftell(fichier)/sizeof(Etudiant);
        for (j=0; j<ftell(fichier)/sizeof(Etudiant); j++)
        {if(S-tableau[p].coef!=0){
            t[j].moyenne=((t[j].moyenne*S)-(tableau[p].coef*t[j].tab[p].moyennedumodule))/(S-tableau[p].coef);
        }
        }
        for (i=p; i<(ftell(f)/sizeof(Note)); i++)
        {
            tableau[i]=tableau[i+1];
            
        }
        fclose(f);
        fclose(fichier);
        
        
        
    }
    fopen("Etudiant.bin", "wb+");
    fopen("Modules.bin", "wb+");
    if (f==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    if (fichier==NULL)
    {
        fprintf(stderr, "Erreur ouverture fichier .\n");
        exit(EXIT_FAILURE);
    }
    fwrite(t,sizeof(Etudiant),e,fichier);
    fwrite(tableau, sizeof(Note), m, f);
    fclose(f);
    fclose(fichier);
    Rmenu();

}


void Rmenu(void)
{
    int h;
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t💫 Qu'est-ce que vous voulez faire maintenant ?");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t💫 entrez ^ 1 ^ pour Retour au menu");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t💫 entrez ^ 2 ^ pour Quitter le programme ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t->>>>");
    scanf("%d",&h);
    if(h==1){
    switch (menu()) {
            case 1:
            printf("\nAffichier les etudiants avec les informations nécessaires\n");
            Afficher();
            break;
            case 2:
            printf("\nAfficher les moyenne\n");
            Moyenne();
            break;
            case 3:
            printf("\nAfficher du major de promotion\n");
            AffichierLeMajor();
            break;
            case 4:
            printf("\nInsertion d'un nouvel étudiant\n");
            InsertionDUnNouvelEtudiant();
            break;
            case 5:
            printf("\nMise à jour d'un étudiant\n");
            MiseAJour();
            break;
            case 6:
            printf("\nSuppression d'un étudiant\n");
            SuppressionDunEtudiant();
            break;
            case 7:
            printf("\nInsertion d'un module\n");
            InsertionDunModule();
            break;
            case 8:
            printf("\nMise à jour d'un module\n");
            MiseaJourDunModule();
            break;
            case 9:
            printf("\nSuppression d'un module\n");
            SuppressionDunModule();
            break;
            
        default:

            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t███╗   ███╗███████╗██████╗  ██████╗██╗\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t████╗ ████║██╔════╝██╔══██╗██╔════╝██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t██╔████╔██║█████╗  ██████╔╝██║     ██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t██║╚██╔╝██║██╔══╝  ██╔══██╗██║     ██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t██║ ╚═╝ ██║███████╗██║  ██║╚██████╗██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝\n");
                
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸\n\n");
            exit(EXIT_SUCCESS);
            break;
    }
    }
    else{

        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t███╗   ███╗███████╗██████╗  ██████╗██╗\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t████╗ ████║██╔════╝██╔══██╗██╔════╝██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t██╔████╔██║█████╗  ██████╔╝██║     ██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t██║╚██╔╝██║██╔══╝  ██╔══██╗██║     ██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t██║ ╚═╝ ██║███████╗██║  ██║╚██████╗██║\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝\n");
            
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸🌸\n\n");
        exit(EXIT_SUCCESS);
    }
}
