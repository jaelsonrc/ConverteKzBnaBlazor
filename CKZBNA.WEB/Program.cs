using CKZBNA.WEB;
using CKZBNA.WEB.Repositories;
using CKZBNA.WEB.Services;
using CKZBNA.WEB.ViewModels;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Radzen;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

builder.Services.AddScoped<DialogService>();
builder.Services.AddScoped<NotificationService>();
builder.Services.AddScoped<TooltipService>();
builder.Services.AddScoped<ContextMenuService>();

builder.Services.AddSingleton<JsService>();
builder.Services.AddScoped<Repository>();
builder.Services.AddScoped<EuroKwanzaViewModel>();

await builder.Build().RunAsync();
