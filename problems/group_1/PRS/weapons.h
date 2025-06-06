#pragma once

enum class Weapons { ROCK, PAPER, SCISSORS };

// �������� ����� ���������� ����������.
bool operator<(Weapons lhs, Weapons rhs) {
    switch (lhs) {
    case Weapons::ROCK: return rhs == Weapons::PAPER;
    case Weapons::PAPER: return rhs == Weapons::SCISSORS;
    case Weapons::SCISSORS: return rhs == Weapons::ROCK;
    }
    return false;
}