# This is a sample .feature file
# Squish feature files use the Gherkin language for describing features, a short example
# is given below. You can find a more extensive introduction to the Gherkin format at
# https://github.com/cucumber/cucumber/wiki/Gherkin
Feature: Open report failure
    Scenario Outline: Open report failure
		Given the software is open
		When the user type the numDeOvos
		And press the button Registrar
		Then the user will be advised  by a pop-up window that there is missing data to be filled
Examples: