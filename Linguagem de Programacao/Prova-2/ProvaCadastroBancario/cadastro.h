
//Definir um tamanho m�ximo para meu vetor
#define T 1

//------------------------------------------------------------

//Criando um ponteiro para evitar um consumo desnecess�rio de mem�ria
typedef struct Cliente *pcliente;

//Definir o vetor de ponteiro
pcliente vClientes[T];

//------------------------------------------------------------

//Criando um ponteiro para evitar um consumo desnecess�rio de mem�ria
typedef struct Conta *pconta;

//Definir o vetor de ponteiro
pconta vContas[T];

//------------------------------------------------------------


//Rotina para liberar mem�ria (desalocar os dados das posi��es do ponteiro) (colocar nulo para todo mundo)
void inicializar();

//Solicitar a leitura de dados do teclado para armazenar em uma regi�o de mem�ria
void ler(int p);

//Solicitar a leitura de dados do teclado para armazenar em uma regi�o de mem�ria
void lerConta(int pc);

//Imprimir os dados de um cliente cujo CPF seja informado.
void imprimir(int cpfInf); //Pesquisa

//Imprimir todos os dados cadastrados
void imprimirTodos();

void verSaldo();

void sacar();

void depositar();
