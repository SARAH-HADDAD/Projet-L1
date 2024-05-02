//
//  mesfonctions.h
//  gestion de scolarité
//
//  Created by sarah haddad on 6/16/20.
//  Copyright © 2020 sarah haddad. All rights reserved.
//

#ifndef mesfonctions_h
#define mesfonctions_h

#include <stdio.h>
typedef struct Tadresse Tadresse;
struct Tadresse
{
int num;
char rue[50];
char ville[20];
char wilaya[20];
};

typedef struct Date Date;
struct Date
{
    int jour,mois,annee;
};

typedef struct Note Note ;
struct Note
{   char nomDuModules[15];
    int  coef;
    int    tpexiste;//1 si tp existe sinon 0
    float emd,tp,td,moyennedumodule;
};

typedef struct Etudiant Etudiant;
struct Etudiant
{
       char nom[30];
       char prenom[30];
       float moyenne;
       Note tab[15];
       int groupe;
       long int matricule ;
       char email[40];
       Date dateDeNaissannce;
       Tadresse adresse;
       
};


int menu(void);
int Valide (Date d);
int Rechercher(long int m);
void InsertionDUnNouvelEtudiant(void);
void Afficher(void);
void Moyenne(void);
void AffichierLeMajor(void);
void MiseAJour(void);
void SuppressionDunEtudiant(void);
void InsertionDunModule(void);
void MiseaJourDunModule(void);
void SuppressionDunModule(void);
void Rmenu(void);
#endif /* mesfonctions_h */
