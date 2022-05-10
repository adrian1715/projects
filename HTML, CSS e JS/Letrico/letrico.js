// LETRICO COLORS GENERATOR
for (var i = 1; i <= 7; i++) {
  switch (Math.floor(Math.random() * 5) + 1) {
    case 1:
      document.querySelector(`.let-${i}`).style.color = "green";
      break;
    case 2:
      document.querySelector(`.let-${i}`).style.color = "rgb(217, 183, 7)";
      break;
    case 3:
      document.querySelector(`.let-${i}`).style.color = "red";
      break;
    default:
      break;
  }
}

// API para gerar palavras aleatórias
const makeRandomWord = async () => {
  try {
    let res = await axios.get("https://api.dicionario-aberto.net/random");
    while (res.data.word.length != 5) {
      res = await axios.get("https://api.dicionario-aberto.net/random");
    }
    console.log("Palavra aleatória: ", res.data.word);
  } catch (e) {
    console.log("error: ", e);
  }
};

const words = [
  "chute",
  "sagaz",
  "negro",
  "mexer",
  "termo",
  "senso",
  "nobre",
  "algoz",
  "afeto",
  "sutil",
  "vigor",
  "fazer",
  "sanar",
  "assim",
  "desde",
  "ideia",
  "fosse",
  "moral",
  "poder",
  "sonho",
  "vinil",
  "teste",
  "pardo",
  "verde",
  "vasco",
  "casco",
  "honra",
  "muito",
  "justo",
  "anexo",
  "pedra",
  "papel",
  "haver",
  "amigo",
  "posse",
  "tempo",
  "causa",
  "dizer",
  "digno",
  "letra",
  "legal",
  "coisa",
  "plano",
  "circo",
  "piano",
  "antes",
  "louco",
  "cacto",
  "carro",
  "arroz",
  "quase",
];

// apenas para teste:
// const words = ['alfaz', 'chuta'];

const keyword = words[Math.floor(Math.random() * words.length)]; // PALAVRA-CHAVE SORTEADA
const chute = document.getElementById("chute"); // input de chute
const chutar = document.getElementById("chutar"); // botão de submit do chute
const form = document.querySelector("form");

let guess = [],
  cont = 0;

// guess[guess.length] = "TESTE";

// ARRUMAR A VERIFICAÇÃO DE CHUTES VÁLIDOS

form.addEventListener("submit", (e) => {
  e.preventDefault();
  const letras = ["A", "B", "C", "D", "E"];

  // transforma todas as letras em minúsculas (para continuar reconhecível caso o usuário digite alguma letra maiúscula)
  chute.value = chute.value.toLowerCase();

  // LÓGICA PARA VERIFICAÇÃO DE PALAVRA
  if (
    cont != 7 &&
    (chute.value.length != 5 || words.includes(chute.value) === false)
  ) {
    if (chute.value.length != 5) {
      console.log("Chute uma palavra de 5 letras");
      chute.value = "";
    } else if (words.includes(chute.value) === false) {
      console.log("Palavra inválida! Tente outra palavra!");
      chute.value = "";
    }
    // return "";
  } // adicionar verificação para palavras repetidas
  else {
    if (cont < 6) {
      cont++;
      guess.push(chute.value);
      chute.value = "";
      console.log("Seus chutes: ", guess);
    }
  }

  if (chute.value != "") chute.value = "";

  switch (cont) {
    case 1:
      for (let i = 0; i < 5; i++) {
        // PARA ADICIONAR VISUALMENTE A PALAVRA INSERIDA - PRIMEIRA PALAVRA/TENTATIVA
        document.querySelector(`#first${letras[i]}`).textContent =
          guess[guess.length - 1][i].toUpperCase();

        // para 'marcar' a próxima tentativa
        document
          .querySelector(`#second${letras[i]}`)
          .classList.add("btn", "btn-light");
      }

      // LÓGICA PARA A VERIFICAÇÃO DAS LETRAS INSERIDAS
      // Nesse caso, verifica se a palavra-chave (keyword) contém a primeira letra ([0]) do último elemento do array guess (guess[length-1], no caso, o último chute)
      for (let i = 0; i < 5; i++) {
        if (keyword.includes(guess[guess.length - 1][i]) == true) {
          if (keyword[i] == guess[guess.length - 1][i]) {
            document.getElementById(`first${letras[i]}`).style.background =
              "green";
          } else {
            document.getElementById(`first${letras[i]}`).style.background =
              "yellow";
          }
        } else {
          document.getElementById(`first${letras[i]}`).style.background = "red";
        }
      }
      break;

    case 2:
      // PARA ADICIONAR VISUALMENTE A PALAVRA INSERIDA - SEGUNDA PALAVRA/TENTATIVA
      for (let i = 0; i < 5; i++) {
        document.querySelector(`#second${letras[i]}`).textContent =
          guess[guess.length - 1][i].toUpperCase();

        document
          .querySelector(`#third${letras[i]}`)
          .classList.add("btn", "btn-light");
      }

      // LÓGICA PARA A VERIFICAÇÃO DAS LETRAS INSERIDAS
      for (let i = 0; i < 5; i++) {
        if (keyword.includes(guess[guess.length - 1][i]) == true) {
          if (keyword[i] == guess[guess.length - 1][i]) {
            document.getElementById(`second${letras[i]}`).style.background =
              "green";
          } else {
            document.getElementById(`second${letras[i]}`).style.background =
              "yellow";
          }
        } else {
          document.getElementById(`second${letras[i]}`).style.background =
            "red";
        }
      }
      break;

    case 3:
      // PARA ADICIONAR VISUALMENTE A PALAVRA INSERIDA - TERCEIRA PALAVRA/TENTATIVA
      for (let i = 0; i < 5; i++) {
        document.querySelector(`#third${letras[i]}`).textContent =
          guess[guess.length - 1][i].toUpperCase();

        document
          .querySelector(`#fourth${letras[i]}`)
          .classList.add("btn", "btn-light");
      }

      // LÓGICA PARA A VERIFICAÇÃO DAS LETRAS INSERIDAS
      for (let i = 0; i < 5; i++) {
        if (keyword.includes(guess[guess.length - 1][i]) == true) {
          if (keyword[i] == guess[guess.length - 1][i]) {
            document.getElementById(`third${letras[i]}`).style.background =
              "green";
          } else {
            document.getElementById(`third${letras[i]}`).style.background =
              "yellow";
          }
        } else {
          document.getElementById(`third${letras[i]}`).style.background = "red";
        }
      }
      break;

    case 4:
      // PARA ADICIONAR VISUALMENTE A PALAVRA INSERIDA - QUARTA PALAVRA/TENTATIVA
      for (let i = 0; i < 5; i++) {
        document.querySelector(`#fourth${letras[i]}`).textContent =
          guess[guess.length - 1][i].toUpperCase();

        document
          .querySelector(`#fifth${letras[i]}`)
          .classList.add("btn", "btn-light");
      }

      // LÓGICA PARA A VERIFICAÇÃO DAS LETRAS INSERIDAS
      for (let i = 0; i < 5; i++) {
        if (keyword.includes(guess[guess.length - 1][i]) == true) {
          if (keyword[i] == guess[guess.length - 1][i]) {
            document.getElementById(`fourth${letras[i]}`).style.background =
              "green";
          } else {
            document.getElementById(`fourth${letras[i]}`).style.background =
              "yellow";
          }
        } else {
          document.getElementById(`fourth${letras[i]}`).style.background =
            "red";
        }
      }
      break;

    case 5:
      // PARA ADICIONAR VISUALMENTE A PALAVRA INSERIDA - QUINTA PALAVRA/TENTATIVA
      for (let i = 0; i < 5; i++) {
        document.querySelector(`#fifth${letras[i]}`).textContent =
          guess[guess.length - 1][i].toUpperCase();

        document
          .querySelector(`#sixth${letras[i]}`)
          .classList.add("btn", "btn-light");
      }

      // LÓGICA PARA A VERIFICAÇÃO DAS LETRAS INSERIDAS
      for (let i = 0; i < 5; i++) {
        if (keyword.includes(guess[guess.length - 1][i]) == true) {
          if (keyword[i] == guess[guess.length - 1][i]) {
            document.getElementById(`fifth${letras[i]}`).style.background =
              "green";
          } else {
            document.getElementById(`fifth${letras[i]}`).style.background =
              "yellow";
          }
        } else {
          document.getElementById(`fifth${letras[i]}`).style.background = "red";
        }
      }
      break;

    case 6:
      // PARA ADICIONAR VISUALMENTE A PALAVRA INSERIDA - SEXTA PALAVRA/TENTATIVA
      for (let i = 0; i < 5; i++) {
        document.querySelector(`#sixth${letras[i]}`).textContent =
          guess[guess.length - 1][i].toUpperCase();
      }

      // LÓGICA PARA A VERIFICAÇÃO DAS LETRAS INSERIDAS
      for (let i = 0; i < 5; i++) {
        if (keyword.includes(guess[guess.length - 1][i]) == true) {
          if (keyword[i] == guess[guess.length - 1][i]) {
            document.getElementById(`sixth${letras[i]}`).style.background =
              "green";
          } else {
            document.getElementById(`sixth${letras[i]}`).style.background =
              "yellow";
          }
        } else {
          document.getElementById(`sixth${letras[i]}`).style.background = "red";
        }
      }

      // CASO NENHUMA DAS TENTATIVAS SEJAM CORRETAS
      if (guess[guess.length - 1] != keyword) {
        cont++;
        console.log("Suas tentativas acabaram :(");
        chute.value = "";
      }

      break;
  }

  // CASO A TENTATIVA ESTEJA CORRETA
  if (guess[guess.length - 1] == keyword) {
    console.log("Parabéns, vc ganhou!");
    guess = [];
    cont = 7;
  }
});
