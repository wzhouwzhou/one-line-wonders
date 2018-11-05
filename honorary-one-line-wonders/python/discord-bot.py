exec("import discord\nfrom discord.ext import commands\nbot = commands.Bot(command_prefix='!')\n@bot.command()\nasync def hello(ctx):\n\tawait ctx.send('Hello World!')\nbot.run('token')")

