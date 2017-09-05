CREATE TABLE CAMPUS (
nome VARCHAR(60),
endereco VARCHAR(120),
codCampus INTEGER PRIMARY KEY
);

CREATE TABLE PESSOA_RG (
telefone VARCHAR(20),
telefone1 VARCHAR(20),
telefone2 VARCHAR(20),
telefone3 VARCHAR(20),
telefone4 VARCHAR(20),
email VARCHAR(45),
perfil VARCHAR(45),
naturalidade VARCHAR(45),
nacionalidade VARCHAR(45),
senha VARCHAR(20),
CPF CHAR(11) PRIMARY KEY,
dataNascimento DATETIME,
nome VARCHAR(60),
usuario VARCHAR(20),
rg CHAR(20),
estadoExpedidor VARCHAR(45),
orgaoExpedidor VARCHAR(45)
);

CREATE TABLE ALUNO (
RM INTEGER PRIMARY KEY,
infoComplementar VARCHAR(120),
CPF CHAR(11),
codBolsa INTEGER,
codTurma INTEGER,
FOREIGN KEY(CPF) REFERENCES PESSOA_RG (CPF)
);

CREATE TABLE BOLSA (
codBolsa INTEGER PRIMARY KEY,
nome VARCHAR(45)
);

CREATE TABLE ENDERECO (
cidade VARCHAR(45),
cep CHAR(45),
logadouro VARCHAR(45),
estado VARCHAR(45),
bairro VARCHAR(45)
);

CREATE TABLE Publica (
RM INTEGER,
codPubli CHAR(45),
FOREIGN KEY(RM) REFERENCES ALUNO (RM)
);

CREATE TABLE PUBLICACAO (
codPubli CHAR(45) PRIMARY KEY,
titulo VARCHAR(200),
ano VARCHAR(10),
mes VARCHAR(20)
);

CREATE TABLE ARTIGO (
qtdPaginas INTEGER,
volume VARCHAR(60),
codPubli CHAR(45),
FOREIGN KEY(codPubli) REFERENCES PUBLICACAO (codPubli)
);

CREATE TABLE TCC (
descricao VARCHAR(10),
codPubli CHAR(45),
FOREIGN KEY(codPubli) REFERENCES PUBLICACAO (codPubli)
);

CREATE TABLE TURMA (
matutino VARCHAR(10),
vespertino VARCHAR(10),
noturno VARCHAR(10),
codTurma INTEGER PRIMARY KEY
);

CREATE TABLE Inscri��o (
codCurso VARCHAR(10),
RM INTEGER,
FOREIGN KEY(RM) REFERENCES ALUNO (RM)
);

CREATE TABLE CURSO (
codCurso VARCHAR(10) PRIMARY KEY,
nomeCurso VARCHAR(60)
);

CREATE TABLE POS_GRADUACAO (
descricao VARCHAR(365),
codCurso VARCHAR(10),
codArea CHAR(20),
FOREIGN KEY(codCurso) REFERENCES CURSO (codCurso)
);

CREATE TABLE AREA (
codArea CHAR(20) PRIMARY KEY,
descricao VARCHAR(60)
);

CREATE TABLE DOCUMENTO (
codDocumento VARCHAR(10) PRIMARY KEY,
tipo VARCHAR(10),
dataSolicita DATETIME,
RM INTEGER,
FOREIGN KEY(RM) REFERENCES ALUNO (RM)
);

CREATE TABLE DISCLIPLINA (
codDisciplina INTEGER PRIMARY KEY,
nomeDisciplina VARCHAR(10),
codLocal INTEGER
);

CREATE TABLE possui (
codCurso VARCHAR(10),
codDisciplina INTEGER,
FOREIGN KEY(codCurso) REFERENCES CURSO (codCurso),
FOREIGN KEY(codDisciplina) REFERENCES DISCLIPLINA (codDisciplina)
);

CREATE TABLE SALA (
qtdMesas VARCHAR(10),
qtdCadeiras VARCHAR(10),
codLocal INTEGER
);

CREATE TABLE LOCAL (
codLocal INTEGER PRIMARY KEY,
descricao VARCHAR(10),
nomeLocal VARCHAR(10),
codCampus INTEGER,
FOREIGN KEY(codCampus) REFERENCES CAMPUS (codCampus)
);

CREATE TABLE LABORATORIO (
qtdComputadores INTEGER,
qtdMesas INTEGER,
qtdCadeiras INTEGER,
codLocal INTEGER,
FOREIGN KEY(codLocal) REFERENCES LOCAL (codLocal)
);

CREATE TABLE Ministra (
matricula INTEGER,
codDisciplina INTEGER,
FOREIGN KEY(codDisciplina) REFERENCES DISCLIPLINA (codDisciplina)
);

CREATE TABLE FUNCIONARIO (
codFuncionario VARCHAR(10) PRIMARY KEY,
dataContratacao VARCHAR(10),
cargo VARCHAR(40),
CPF CHAR(11),
FOREIGN KEY(CPF) REFERENCES PESSOA_RG (CPF)
);

CREATE TABLE PROFESSOR (
exclusiva VARCHAR(10),
parcial VARCHAR(10),
matricula INTEGER PRIMARY KEY,
codFuncionario VARCHAR(10),
FOREIGN KEY(codFuncionario) REFERENCES FUNCIONARIO (codFuncionario)
);

CREATE TABLE GRADUACAO (
descricao VARCHAR(365),
codCurso VARCHAR(10),
FOREIGN KEY(codCurso) REFERENCES CURSO (codCurso)
);

CREATE TABLE COLABORADOR (
descricao VARCHAR(60),
funcao VARCHAR(60),
codFuncionario VARCHAR(10),
codDepartamento INTEGER,
FOREIGN KEY(codFuncionario) REFERENCES FUNCIONARIO (codFuncionario)
);

CREATE TABLE DEPARTAMENTO_COORDENADOR (
codDepartamento INTEGER PRIMARY KEY,
nomeDepartamento VARCHAR(60),
descricao VARCHAR(365),
infoComplementar VARCHAR(365),
codFuncionario VARCHAR(10),
FOREIGN KEY(codFuncionario) REFERENCES FUNCIONARIO (codFuncionario)
);

ALTER TABLE ALUNO ADD FOREIGN KEY(codBolsa) REFERENCES BOLSA (codBolsa);
ALTER TABLE ALUNO ADD FOREIGN KEY(codTurma) REFERENCES TURMA (codTurma);
ALTER TABLE Publica ADD FOREIGN KEY(codPubli) REFERENCES PUBLICACAO (codPubli);
ALTER TABLE Inscri��o ADD FOREIGN KEY(codCurso) REFERENCES CURSO (codCurso);
ALTER TABLE POS_GRADUACAO ADD FOREIGN KEY(codArea) REFERENCES AREA (codArea);
ALTER TABLE DISCLIPLINA ADD FOREIGN KEY(codLocal) REFERENCES LOCAL (codLocal);
ALTER TABLE SALA ADD FOREIGN KEY(codLocal) REFERENCES LOCAL (codLocal);
ALTER TABLE Ministra ADD FOREIGN KEY(matricula) REFERENCES PROFESSOR (matricula);
ALTER TABLE COLABORADOR ADD FOREIGN KEY(codDepartamento) REFERENCES DEPARTAMENTO_COORDENADOR (codDepartamento);