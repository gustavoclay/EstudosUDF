<?xml version="1.0" encoding="ISO-8859-1"?>
<!--NÃO PREPARADO PARA CONVERSÃO DE ESQUEMA CONCEITUAL-->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:strip-space elements="Tabela Campo"/>
<xsl:template match="/">
<html>
<head>
<title>Modelo convertido XSL</title>
</head>
<body>
<P ALIGN="center" style="font-family: Verdana, Arial, Helvetica, sans-serif;font-size: 14px;font-weight: bold;">
ESQUEMA LÓGICO
<xsl:if test="MER/Informacoes/Tipo/@Valor = 'CONCEITUAL'">
<BR/><BR/>
<xsl:text>NÃO PREPARADO PARA CONVERSÃO DE ESQUEMA CONCEITUAL</xsl:text>
</xsl:if> 
</P>
<table width="80%" align="center" border="0" cellpadding="0" cellspacing="2" style="font-family: Verdana, Arial, Helvetica, sans-serif;font-size: 12px;font-weight: bold;">
<xsl:for-each select="MER/Tabelas/Tabela">
<tr>
<td>
<xsl:value-of select="@nome"/>
<xsl:text> (</xsl:text>
<xsl:for-each select="./Campos/Campo[ApenasSeparador/@Valor = 0]">
<span style="font-weight:normal;">
<xsl:if test="./IsKey/@Valor = -1">
<xsl:attribute name="style">
<xsl:text>font-weight:normal;text-decoration:underline</xsl:text>
</xsl:attribute>
</xsl:if> 
<xsl:if test="./IsFKey/@Valor = -1">
<xsl:attribute name="style">
<xsl:text>font-weight:normal;text-decoration:overline</xsl:text>
</xsl:attribute>
</xsl:if> 
<xsl:value-of select="@nome"/>
</span>
<xsl:if test="position()!=last()">
<xsl:text>, </xsl:text>
</xsl:if>
</xsl:for-each>
<xsl:text>)</xsl:text>
</td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>
