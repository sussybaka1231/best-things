import discord
import asyncio
import keyboard

intents = discord.Intents.all()
client = discord.Client(command_prefix='!', intents=intents)


@client.event
async def on_ready():
    
    print('Bot has logged in as {0.user}'.format(client))


@client.event
async def on_message(message):
    if message.author == client.user:
        return 
    while True:
        async def execute():
                keyboard.wait('ctrl+shift')
                scp_input = input("Replying as {0.user}: ".format(client))
                await message.channel.send(scp_input)
        while True:
            if message.content.lower().startswith(""):
                print(f"{message.author}: {message.content}")
            await execute()
        
client.run(
    'YOUR_BOT_APPLICATION_ID_HERE')
