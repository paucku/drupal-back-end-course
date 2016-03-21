This module is homework implementation of WORKING WITH FIELDS at Drupal Back-end Course.

# Homework 4
Write a module that defines new field type “Example color”.
1. The field should have two widgets –hex code and colorpicker using farbstatic library that comes from the system module.
2. The field should print the following text: “The color for this event is [color]”. There should be two formatters. The first should color the text, the second should color the background of the text.
3. The field should have a validation for hex code value using the followingregular expression: '@^#[0-9a-f]{6}$@'
4. Every single field instance should color its own text or background
