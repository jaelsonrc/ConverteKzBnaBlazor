const DIV_BNA = "#conteudoBNA";

function setItem(key, value) {
    localStorage.setItem(key, value);
}


function getItem(key) {
  return localStorage.getItem(key);
}


function SetDomHtml(strHtml) {

    $(DIV_BNA).html(strHtml);

}

function ObterListaDeBancos() {
    let retorno = "";
    $($(DIV_BNA).find("table")[1]).children().children().each(function (index, tds) {
        $(tds).children().each(function (index, conteudo) {
            td = $(conteudo).text();
            if (td.includes("("))
                retorno += td+";";
        });
    });

    return retorno;
}

function ObterValorDoEuro(banco) {
    let retorno = "";
    let td = "";

    $($(DIV_BNA).find("table")[1]).children().children().each(function (index, tds) {
        $(tds).children().each(function (index, conteudo) {
            td = $(conteudo).text();
            if (td.includes(banco))
                retorno = $($(tds).children()[4]).text();
        });
    });

    return retorno;
}

function ObterDataActualizacao() {
    return $($(DIV_BNA).find("table")[0]).find("td:eq(1)").text();
}