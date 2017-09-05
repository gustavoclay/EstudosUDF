-- apontar o schema a ser usado
use emprego;

-- selecione todos os registros da tabela empresa
select * from empresa;
select * from empregado;

-- insira na tablema empresa (cnpj, razaoSocial, nomeFantasia, endereco, telefone)
-- 				os valores	 ('123', 'CENTRO EDUCACIONAL', 'UDF', '904 sul', '12345')
insert into empresa (cnpj, razaoSocial, nomeFantasia, endereco, telefone)
			values ('123', 'CENTRO EDUCACIONAL', 'UDF', '904 sul', '12345');
-- criar mais 3 empresas
insert into empresa (cnpj, razaoSocial, nomeFantasia, endereco, telefone)
			values ('1234', 'UNIVERSIDADE PAULISTA', 'UNIP', '710 sul', '123456');
insert into empresa (cnpj, razaoSocial, nomeFantasia, endereco, telefone)
			values ('12345', 'UNIVERSIDADE CATOLICA', 'UCB', 'AGUAS CLARAS', '123455');
insert into empresa (cnpj, razaoSocial, nomeFantasia, endereco, telefone)
			values ('123456', 'UNIVERSIDADE EUROPA', 'UNIER', 'BRASÍLIA', '123457');
            
-- criar 2 empregados
insert into empregado (cpf, nome, endereco, telefone, cnpjEmpresa)
			values('123', 'Joao', 'QNH 40', '88889999', '123');
insert into empregado (cpf, nome, endereco, telefone, cnpjEmpresa)
			values('122', 'Maria', 'QNJ 17', '88881111', '123456');
            
-- criar outro empregado que trabalhe na empresa de cnpj 555555555555555
insert into empregado (cpf, nome, endereco, telefone, cnpjEmpresa)
			values('121', 'Regis', 'QNI 19', '88887777', '55555555555555');
            
-- criar a tabela de cargos contendo codigo e decricao do cargo e incluir 2 registros
create table cargo(
	codigo varchar(3) not null,
    descricaoCargo varchar(50) not null,
    primary key (`codigo`)
);

insert into cargo(codigo, decricaoCargo)
		value('1', 'Analista de Qualidade');
insert into cargo(codigo, decricaoCargo)
		value('2', 'Analista de Processos');









