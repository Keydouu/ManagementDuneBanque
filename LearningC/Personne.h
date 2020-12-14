#ifndef Personne
#define Personne
#define ChaineDeCharactère 12
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
    char nom[ChaineDeCharactère];
    char prenom[ChaineDeCharactère];
    char profession[ChaineDeCharactère];
    char tel[ChaineDeCharactère];
    Compte compteDuClient[3];
};
#endif // Personne
