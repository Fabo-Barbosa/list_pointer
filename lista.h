/*tipo que indica o elemento da lista*/
typedef struct{
	int Chave;
}TipoItem;

typedef struct Celula_str *Apontador;

typedef struct Celula_str{
	TipoItem Item;
	Apontador prox;
}Celula;

typedef struct{
	Apontador Primeiro, Ultimo;
}TipoLista;

TipoLista* InicializaLista();
void FLVazia (TipoLista* ); 
int Vazia (TipoLista *);
void Insere (TipoItem , TipoLista *, Apontador); 
TipoItem RetiraIni (Celula*, TipoLista *); 
void Imprime (TipoLista* );
int Tamanho_lista(TipoLista* );
int Busca(int , TipoLista* );
TipoItem RetiraUlt (TipoLista *);
