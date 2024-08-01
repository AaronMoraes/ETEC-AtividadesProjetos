var minhaDataAtual = new Date();
var minhaDataPassada = new Date(2023,7,31);
document.write (minhaDataAtual.toLocaleString('pt-BR',{
    timezone: 'America/São_Paulo',
    dateStyle: 'long',
    timeStyle: 'long',
}));
document.write("<br>"); document.write("<br>");
document.write (minhaDataPassada); document.write("<br>");
var anoAtual = minhaDataAtual.getFullYear();
var anoPassado = minhaDataPassada.getFullYear();
document.write("<br> O ano atual é: " + anoAtual); document.write("<br>");
document.write("<br> O ano passado é: " + anoPassado);
minhaDataAtual.setFullYear(2024);
var dia = minhaDataAtual.getDate();
var mes = parseInt(minhaDataAtual.getMonth() + 1);
var ano = minhaDataAtual.getFullYear();
document.write ("<br>")
document.write ("<br>")
document.write (dia + "/" + mes + "/" + ano);
