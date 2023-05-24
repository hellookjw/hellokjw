import pickle
import os

def input_scores():
    scores = []
    count = 1
    while True:
        score = int(input(f"#{count}? "))
        if score < 0:
            break
        scores.append(score)
        count += 1
    return scores

def get_average(scores):
    total = sum(scores)
    average = total / len(scores)
    return round(average, 1)

def show_scores(scores):
    print("개인점수:", end=" ")
    for score in scores:
        print(score, end=" ")
    print()

filename = "score.bin"
saved_scores = load_scores(filename)

if saved_scores:
    print("[파일읽기]")
    show_scores(saved_scores)
    average = get_average(saved_scores)
    print("평균:", average)
else:
    print("이전에 저장된 점수가 없습니다.")

scores = input_scores()
save_scores(scores, filename)

print()
show_scores(scores)

average = get_average(scores)
print("평균:", average)
