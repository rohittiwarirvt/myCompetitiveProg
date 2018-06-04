#!/usr/bin/env python

import random
import urllib

print 'time to play hang man'

animals = urllib.urlopen('http://davidbau.com/data/animals').read().split()
##animals = ['shark', 'giraffe']
secret = random.choice(animals)
guesses = "aeiou"

turns = 5

while turns > 0:
  missed = 0
  for letter in secret:
    if letter in guesses:
      print letter,
    else:
      missed += 1
      print '_',

  print

  if missed == 0:
    print 'You win'
    break

  guess = raw_input('Please make a guess !')
  guesses += guess

  if guess not in secret:
    turns -= 1
    print 'Nope'
    print turns,' more turns left'
    if turns == 5: print '   O   '
    if turns < 4: print  ' \_|_/ '
    if turns < 3: print  '   |   '
    if turns < 2: print  '  / \  '
    if turns < 1: print  ' d   b '
    if turns == 0:
      print 'The ansser is ', secret
