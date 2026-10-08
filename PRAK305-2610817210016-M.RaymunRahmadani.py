second = int (input())

day = second // 86400
remaining_seconds = second % 86400

hour = remaining_seconds // 3600
remaining_seconds = remaining_seconds % 3600

minute = remaining_seconds // 60
second = remaining_seconds % 60

if day > 0:
    print(f"{day} hari {hour:02d}:{minute:02d}:{second:02d}")
else:
    print(f"{hour:02d}:{minute:02d}:{second:02d}")