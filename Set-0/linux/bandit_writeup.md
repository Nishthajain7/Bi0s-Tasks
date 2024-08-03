# Level 0
`ssh bandit.labs.overthewire.org -p 2220 -l bandit0` is used to login
![Level 1](https://github.com/user-attachments/assets/e038ae36-a7b2-4014-9a54-871ece28e532)
Password is **ZjLjTmM6FvvyRnrb2rfNWOZOTa6ip5If**

# Level 1
I tried `cat -` twice which gave no result. Then I chekced the [instructions](https://overthewire.org/wargames/bandit/bandit2.html) that said I must use `cat < -`
![level 2](https://github.com/user-attachments/assets/c54f7b7c-f1ce-41af-bccb-d4b7e86de37e)
Password is **263JGJPfgU6LtdEvgfWU1XP5yac29mFx**

# Level 2
Used the Tab key to auto-completes the filename. So this level was not a problem.
![Level 3](https://github.com/user-attachments/assets/19bc3b85-9cca-452a-9c47-2926f690c527)
Password is **MNk8KNH3Usiio41PRUEoDFPqfxLPlSmx**

# Level 3
![level 4](https://github.com/user-attachments/assets/417bec61-854d-4aa3-8e6e-5caab5a9621d)
Password is **2WmrDFRmJIq3IPxneAaMGhap0pFhF3NJ**

# Level 4
After having learnt that the The `file *` command determines the type of every file, I used it but just like at level 2, the file names here also started with a dash so the command is going to be slightly different
![level 5](https://github.com/user-attachments/assets/d89bcf5a-28c7-483c-9730-fdd049c93fb1)
Password is **4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw**

# Level 5
![image](https://github.com/user-attachments/assets/c29c0dbc-04a8-47a5-812c-a3652820061b)
password is **HWasnPhtq9AVKe0dmk45nxy20cvUa6EG**

# Level 6
Since the task said that the The password is stored **somewhere on the server**, I changed  <br>
`find . -type f -size 33c -user bandit7 -group bandit6`  to  `find . -size 33c -user bandit7 -group bandit6` so that the search is not restricted to files only.<br>
![Screenshot from 2024-08-03 10-05-15](https://github.com/user-attachments/assets/23162926-5d28-4bae-91a7-ae40c95b473c) <br>
After knowing what 'somewhere on the server' actually meant, I tried `find / -size 33c -user bandit7 -group bandit6` to start the search from the root directory but this gave me a really long list of permission denied errors (along with the filename). Finally I found the password using `find / -user bandit7 -group bandit6 -size 33c 2>/dev/null` which redirected the error messages and returned only the output file
![image](https://github.com/user-attachments/assets/79f00620-d944-4f78-a47a-62b130c62a13)
password is **morbNTDkSW6jIlUc0ymOdMaLnOlFVAaj**





