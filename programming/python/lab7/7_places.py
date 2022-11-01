def count_now(places):
    for place in places:
        if len(place) > 5:
            print(place)

places = ["DELHI","LONDON","PARIS","NEW YORK","DUBAI"]
count_now(places)
