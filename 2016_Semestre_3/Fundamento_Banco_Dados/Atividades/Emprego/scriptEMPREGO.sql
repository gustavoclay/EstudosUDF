-- MySQL Script generated by MySQL Workbench
-- 09/27/16 21:45:22
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema EMPREGO
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema EMPREGO
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `EMPREGO` DEFAULT CHARACTER SET utf8 ;
USE `EMPREGO` ;

-- -----------------------------------------------------
-- Table `EMPREGO`.`EMPRESA`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `EMPREGO`.`EMPRESA` (
  `cnpj` VARCHAR(14) NOT NULL,
  `razaoSocial` VARCHAR(45) NOT NULL,
  `nomeFantasia` VARCHAR(45) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `telefone` VARCHAR(20) NOT NULL,
  PRIMARY KEY (`cnpj`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `EMPREGO`.`EMPREGADO`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `EMPREGO`.`EMPREGADO` (
  `cpf` VARCHAR(11) NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `telefone` VARCHAR(20) NOT NULL,
  `cnpjEmpresa` VARCHAR(14) NOT NULL,
  PRIMARY KEY (`cpf`, `cnpjEmpresa`),
  INDEX `fk_EMPREGADO_EMPRESA_idx` (`cnpjEmpresa` ASC),
  CONSTRAINT `fk_EMPREGADO_EMPRESA`
    FOREIGN KEY (`cnpjEmpresa`)
    REFERENCES `EMPREGO`.`EMPRESA` (`cnpj`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
