#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1 = Cliente ( "Xayso Sovon Ziahaka",
                            "Rua Xangrilá - Braúnas",
                            "Belo Horizonte",
                            "MG",
                            "31365-570",
                            "3196007958");
    
    Cliente cl2 = Cliente ( "Minia Pasies Kituos",
                            "Rua dos Jacobinos - Ouro Minas",
                            "Belo Horizonte",
                            "MG",
                            "31870-290",
                            "3197627067");
    
    Cliente cl3 = Cliente ( "Vuocue Leiur Baonauza",
                            "Rua Orminda de Almeida - Tupi B",
                            "Belo Horizonte",
                            "MG",
                            "31842-630",
                            "3195949327");
    
    Cliente cl4 = Cliente ( "Zerer Huduy Fyogar",
                            "Rua Taquaril - Jonas Veiga",
                            "Belo Horizonte",
                            "MG",
                            "30285-422",
                            "3198596327");
    
    Cliente cl5 = Cliente ( "Ceziel Mioti Pler",
                            "Rua João Gualberto Costa - Serrano",
                            "Belo Horizonte",
                            "MG",
                            "30882-747",
                            "3196274465");
    
    Cliente cl6 = Cliente ( "Esxo Cilal Zyais",
                            "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)",
                            "Belo Horizonte",
                            "MG",
                            "31650-560",
                            "3195004414");

    Cliente cl7 = Cliente ( "Leova Wikyecil Neaca",
                            "Rua João Arantes - Cidade Nova",
                            "Belo Horizonte",
                            "MG",
                            "31170-240",
                            "3198461192");
    
    Cliente cl8 = Cliente ( "Teas Heimeu Pipe",
                            "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)",
                            "Belo Horizonte",
                            "MG",
                            "30668-430",
                            "3197317802");

    int qtdeA = 0;
    int qtdeCa = 0;
    int qtdeCb = 0;

    Apartamento ap1 = Apartamento(55.4, 2, 1, 0, 987.0, cl1, "Tuoruars");
    qtdeA++;

    Apartamento ap2 = Apartamento(74.5, 2, 1, 2, 1540.0, cl2, "Fyubyeis");
    qtdeA++;

    Apartamento ap3 = Apartamento(87.2, 3, 2, 2, 2354.0, cl3, "Kelia");
    qtdeA++;

    // Cobertura
    Cobertura cb1 = Cobertura(120.1, 3, 3, 2, 3123.5, cl4, "Koci");
    qtdeCb++;
    
    Cobertura cb2 = Cobertura(134.8, 4, 3, 3, 3578.2, cl5, "Wail");
    qtdeCb++;

    Cobertura cb3 = Cobertura(180.0, 4, 4, 4, 4165.7, cl6, "Fival");
    qtdeCb++;

    // Casas
    Casa ca1 = Casa(145.6, 3, 3, 2, 4023.6, cl7, "Beydo");
    qtdeCa++;

    Casa ca2 = Casa(245.0, 5, 4, 4, 4856.2, cl8, "Riuzi");
    qtdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorAp = 0.0;
    double valorCb = 0.0;
    double valorCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorAp += ap1.calcularValorTotal();
    comissAp += ap1.calcularComissao();
    std::cout << endl;

    ap2.print();
    valorAp += ap2.calcularValorTotal();
    comissAp += ap2.calcularComissao();
    std::cout << endl;

    ap3.print();
    valorAp += ap3.calcularValorTotal();
    comissAp += ap3.calcularComissao();
    std::cout << endl;

    cb1.print();
    valorCb += cb1.calcularValorTotal();
    comissCb += cb1.calcularComissao();
    std::cout << endl;

    cb2.print();
    valorCb += cb2.calcularValorTotal();
    comissCb += cb2.calcularComissao();
    std::cout << endl;

    cb3.print();
    valorCb += cb3.calcularValorTotal();
    comissCb += cb3.calcularComissao();
    std::cout << endl;

    ca1.print();
    valorCa += ca1.calcularValorTotal();
    comissCa += ca1.calcularComissao();
    std::cout << endl;

    ca2.print();
    valorCa += ca2.calcularValorTotal();
    comissCa += ca2.calcularComissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << qtdeA
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorAp
            << "\n Comissão Total: R$" << comissAp
            << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << qtdeCb
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCb
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
            << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << qtdeCa
            << "\n Valor Total: R$ " << fixed << setprecision(2) << valorCa
            << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
            << endl;
}
