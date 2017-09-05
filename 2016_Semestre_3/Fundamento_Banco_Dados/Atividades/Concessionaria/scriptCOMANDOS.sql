SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- Criar schema chmado concessionariadb
create schema if not exists concessionariadb default character set utf8;
-- Usar schema
use concessionariadb;

-- criar tabela Marca
create table if not exists MARCA (
	idMarca int not null,
    nome varchar(45) not null,
    primary key (idMarca)
    )
engine = InnoDB;

-- criar tabela veiculo
create table if not exists VEICULO (
	idVeiculo int not null,
    modelo varchar(45) not null,
    MARCA_idMarca int not null,
    primary key(idVeiculo),
    index fk_VEICULO_MARCA_idx(MARCA_idMarca ASC),
    constraint fk_VEICULO_MARCA
		foreign key (MARCA_idMarca)
        references MARCA(idMarca)
        on delete no action
        on update no action
	)
engine = InnoDB;





-- inserindo atendentes
insert into atendente(idAtendente, nome, cpf, endereco, telefone)
values ('1', 'joao', '123', 'lago sul', '123456');
insert into atendente(idAtendente, nome, cpf)
values ('2', 'Maria', '124');

-- inserindo clientes
insert into cliente(idCliente, nome, cpf, endereco, telefone)
values ('1', 'joao', '123', 'lago sul', '123456');
insert into cliente(idCliente, nome, cpf, endereco, telefone)
values ('2', 'Maria', '124', 'lago sul', '123456');

-- inserindo marcas
insert into marca values ('1', 'Chevrolet');
insert into marca values ('2', 'VM');
insert into marca values ('3', 'FORD');

-- inserindo tiporevisao
insert into tiporevisao values ('1', 'revisao de 10 mil km');
insert into tiporevisao values ('2', 'revisao de 20 mil km');
insert into tiporevisao values ('3', 'revisao de 30 mil km');

-- inserindo veiculo
insert into veiculo values ('1', 'vyper black','2');
insert into veiculo values ('1', 'vyper II','2');
insert into veiculo values ('1', 'vyper TRiplo','2');
insert into veiculo values ('1', 'KA','3');

-- inserindo revisão
insert into revisao values(1, 'JFK-4122', '2016-11-01', 1956.90, 1.5, 1, 1, 2, 3);

select * from revisao;








