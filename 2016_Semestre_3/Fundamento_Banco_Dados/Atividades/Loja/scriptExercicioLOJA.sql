use mydb;
-- inserir funcionário
insert into funcionario (matricula, nome, cpf)
	values ('1558921','Gustavo','01102103945');
-- verificar funcionário
select * from funcionario;

-- inserir fornecedor
insert into fornecedor(codFornecedor, nome, cnpj)
	values ('15543', 'Samsung', '15514848522354');
-- verificar fornecedor
select * from fornecedor;

-- inserir produto
insert into produto(codProduto, nome, cor, valor, FORNECEDOR_codFornecedor)
	values('12345', 'Galaxy 7', 'azul', '599.90','15543');
-- verificar produto
select * from produto;

-- inserir venda
insert into venda (codVenda, descricaoVenda, qtdProduto, dataVenda, FUNCIONARIO_matricula, PRODUTO_codProduto)
	values('1','2 galaxy 7','2','2016-10-01','1558921','12345');
-- verificar venda
select * from venda;



-- apagar schema
-- drop schema mydb; drop schema emprego;




    