c---and-python
==============

Este repositório demonstra como integrar código C com Python, permitindo que você aproveite a performance de C em aplicações Python. Ideal para tarefas computacionalmente intensivas onde performance é essencial.

📦 Estrutura do Projeto

c---and-python/
├── c_code/
│   └── example.c           # Código-fonte C
├── python_code/
│   └── main.py             # Código Python que chama o módulo C
├── build.sh                # Script para compilar o código C
└── README.md

🚀 Como Executar

1. Compile o código C

Navegue até a raiz do projeto e execute:

    sh build.sh

Isso irá compilar o código C e gerar uma biblioteca compartilhada (.so ou .dll, dependendo do sistema).

2. Execute o Python

Depois de compilar, execute o script Python:

    python3 python_code/main.py

🔧 Dependências

- Python 3.x
- GCC (ou outro compilador C compatível)
- ctypes (embutido no Python)

📚 Exemplos de Integração

O projeto usa o módulo ctypes para carregar bibliotecas C e chamar funções diretamente a partir do Python.

from ctypes import CDLL, c_int

lib = CDLL("../c_code/libexample.so")
lib.somar.argtypes = [c_int, c_int]
lib.somar.restype = c_int

print(lib.somar(2, 3))  # Saída esperada: 5

✅ Compatibilidade

Testado em:

- Ubuntu 22.04
- macOS Sonoma
- Windows 10 (com MinGW)

📄 Licença

MIT
