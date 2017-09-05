-- Crie um schema chamado escola e crie uma entidade
-- chamada aluno contendo rgm, nome e endereço
-- todos os campos devem ter preenchimento obrigatorio
-- o campo rgm é chave primaria

-- criar schema escola
create schema ESCOLA;

-- criar entidade aluno
create table ESCOLA.ALUNO(
	rgm int(11) not null,
	nome varchar(45) not null,
	endereco varchar(45) not null,
	constraint pk_aluno primary key (rgm)
);

-- insira dois alunos
use escola;
insert into aluno (rgm, nome, endereco)
	values(15588921, 'Gustavo Clay', 'Asa sul');
insert into aluno (rgm, nome, endereco)
	values(1889521, 'Joao da silva', 'Asa norte');
-- não precisa especificar os campos
insert into aluno values(1889522, 'Maria', 'Asa norte');

-- se tiver um campo auto-incremento não mencionar esse campo
insert into aluno values('Maria', 'Asa norte');

-- se tiver um campo não obrigatório, obrigatoriamente especificar os campos
insert into aluno (rgm, nome, endereco)
	values(1889521, 'Joao da silva', 'Asa norte');

select * from aluno;
-- selecionando os campos rgm e nome de todos os alunos
select rgm, nome from aluno;

-- alterando o nome do aluno poruqe esta errado
update aluno set nome ='Joao dos santos' where rgm = 1889521;


















