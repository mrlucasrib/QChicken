# This is a sample .feature file
# Squish feature files use the Gherkin language for describing features, a short example
# is given below. You can find a more extensive introduction to the Gherkin format at
# https://github.com/cucumber/cucumber/wiki/Gherkin
Feature: Open Report
	Scenario Outline: Open Report
		Given the software is open
		When the user type the qtdeFrangs
		And type the valFrango
		And type the qtdeOvos
		And type the valOvos
		And type the qtdeRacao
		And type the valRacao
		And type inicio
		And type the final
		And press the button Registry
		Then the user must be redirected to the dashboard view
Examples:
