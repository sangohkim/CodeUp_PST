import sys
cur_h, cur_m, cur_s = [int(i) for i in sys.stdin.readline().rstrip().split(' ')]
spend_s = int(sys.stdin.readline().rstrip())
tot_s = (cur_h * 3600 + cur_m * 60 + cur_s + spend_s) % (24 * 60 * 60)
print("{} {} {}".format(tot_s // 3600, tot_s % 3600 // 60, tot_s % 3600 % 60))
