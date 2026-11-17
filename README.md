# 🔗 Listas Simplesmente Encadeadas em C

Repositório acadêmico dedicado ao estudo e implementação de **Listas Simplesmente Encadeadas (Singly Linked Lists)** na linguagem **C**, desenvolvido no curso de **Análise e Desenvolvimento de Sistemas (ADS)** no **IF Baiano (Campus Guanambi)**.

* **Autor:** Hiago Rocha Souza ([@HiagoLBP](https://github.com/HiagoLBP))
* **Disciplina:** Estrutura de Dados
* **Professor:** Reinaldo Cotrim
* **Semestre:** Outubro / 2025

---

## 📌 Exercícios e Funcionalidades

### 🧩 Atividade 1: Lista Encadeada com Inserção Ordenada (`at1.c`)
Implementação de lista encadeada dinâmica com menu interativo com as seguintes operações:
1. **Inserção no Final:** Adiciona nós no final da lista encadeada.
2. **Inserção Ordenada:** Insere novos elementos mantendo a lista ordenada numericamente.
3. **Busca Sequencial:** Varredura para encontrar valores digitados pelo usuário.
4. **Remoção do Final:** Desalocação segura do último elemento da lista com atualização do ponteiro anterior.
5. **Exibição Completa:** Impressão de todos os nós conectados.

### 🧩 Atividade 2: Lista Encadeada com Inserção no Início (`at2.c`)
Operações básicas e ágeis no início da lista (comportamento similar à Pilha):
1. **Inserção no Início:** Inserção em tempo $O(1)$.
2. **Remoção no Início:** Eliminação do nó cabeça em tempo $O(1)$ com liberação de memória.
3. **Exibição:** Percurso e listagem de todos os elementos.

---

## 📂 Estrutura do Repositório

```
Trabalho-Lista-Estrutura-de-Dados/
├── at1.c         # Implementação de Lista com inserção ordenada e remoção no final
├── at2.c         # Implementação de Lista com inserção e remoção no início
├── .gitignore    # Bloqueio de executáveis compilados
└── README.md     # Documentação detalhada
```

---

## 🚀 Como Compilar e Executar

Com o compilador **GCC** instalado:

```bash
# Compilar Atividade 1
gcc at1.c -o at1
./at1

# Compilar Atividade 2
gcc at2.c -o at2
./at2
```

---

## 👨‍💻 Autor

Desenvolvido por **[Hiago L. B. P.](https://github.com/HiagoLBP)**.
