tela = document.getElementById("grandeImagem");
referencia = document.getElementsByClassName("pequenaImagem");

function trocaImagem(novaImagem)
{
    tela.src = novaImagem;
}

function voltaImagem()
{
    tela.src = "img/imgGrande.jpg";
}

[].forEach.call(referencia, (elemento) =>{
    elemento.onmouseover = () => trocaImagem(elemento.src);
    elemento.onmouseout = voltaImagem;
})