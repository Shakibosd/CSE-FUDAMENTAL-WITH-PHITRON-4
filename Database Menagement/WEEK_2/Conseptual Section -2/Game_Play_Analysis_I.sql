
-- https://leetcode.com/problems/game-play-analysis-i/submissions/1211829137/
SELECT PLAYER_ID, MIN(EVENT_DATE) AS FIRST_LOGIN
FROM ACTIVITY
GROUP BY PLAYER_ID;