#ifndef Personne
#define Personne
#define ChaineDeCharact�re 12
typedef struct Compte Compte;
struct Compte
{
    long compteId;
    long compteMDP;
    double money;
};
typedef struct Client Client;
struct Client
{
    long clientID;
    long clientMDP;
    char nom[ChaineDeCharact�re];
    char prenom[ChaineDeCharact�re];
    char profession[ChaineDeCharact�re];
    char tel[ChaineDeCharact�re];
    Compte compteDuClient[3];
};
#endif // Personne
