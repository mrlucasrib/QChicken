# This is a sample .feature file
# Squish feature files use the Gherkin language for describing features, a short example
# is given below. You can find a more extensive introduction to the Gherkin format at
# https://github.com/cucumber/cucumber/wiki/Gherkin
Feature: A brief yet descriptive text of what is desired

    Some textual description of the business value of this feature goes
    here. The text is free-form.

    The description can span multiple paragraphs.

    Scenario: A first scenario in which the feature can be exercised

        Given some precondition is met
          And another precondition
         When some action is performed
         Then the results should be as expected
          And some other testable outcome is achieved

    Scenario: This is a second sample scenario

        ...
