

from youtube_dl import YoutubeDL
# change the format to bestaudio to get mp3 file.
audio_downloder = YoutubeDL({'format':'bestaudio'})
#This the link for my favorite song (you can put the link to your video).

link_to_youtube_video = str(input("Enter the URL of the video you want to download: \n>> "))


#download the audio
audio_downloder.extract_info(link_to_youtube_video)
print(link_to_youtube_video.title + " has been successfully downloaded.")